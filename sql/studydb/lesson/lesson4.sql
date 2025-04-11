-- 🎯 Lesson 4 の目標
-- 複数のテーブルを結合する方法を学ぶ

-- INNER JOIN, LEFT JOIN, RIGHT JOIN の違いを理解する

-- 実務でよくある「リレーション」をSQLで扱えるようにする

use testdb;

CREATE TABLE orders (
  id INT,
  user_id INT,
  product VARCHAR(50),
  quantity INT
);

CREATE TABLE users (
  id INT,
  name VARCHAR(50),
  age INT,
  city VARCHAR(50)
);

INSERT INTO users (id, name, age, city) VALUES
(1, '太郎', 25, 'Tokyo'),
(2, 'Hanako', 32, 'Osaka'),
(3, 'Ken', 19, 'Nagoya'),
(4, 'Yuki', 28, 'Tokyo');


INSERT INTO users (id, name, age, city) VALUES
(1, 'Taro', 25, 'Tokyo'),
(2, 'Hanako', 32, 'Osaka'),
(3, 'Ken', 19, 'Nagoya');
INSERT INTO orders (id, user_id, product, quantity) VALUES
(1, 1, 'Apple', 3),
(2, 1, 'Banana', 1),
(3, 2, 'Orange', 5);

select users.name ,orders.product, orders.quantity 
from users
inner join orders 
on users.id = orders.user_id;

select users.name,orders.product
from users
left join orders
on users.id = orders.user_id;

-- INNER JOIN を使って、ユーザーの名前・商品名・数量を取得してください
select users.name as '名前' , orders.product as '商品名' , orders.quantity as '数量' 
from users 
inner join orders
on users.id = orders.user_id;

-- LEFT JOIN を使って、すべてのユーザーの名前と注文した商品名を表示してください
-- 　※商品がない人のところは NULL になります
select users.name as '名前' , orders.product as '商品名' , orders.quantity as '数量' 
from users 
left join orders
on users.id = orders.user_id;


-- 注文が存在しないユーザーの名前だけを表示してください（ヒント：LEFT JOIN＋WHERE orders.id IS NULL）

select users.name as '名前'  
from users 
left join orders
on users.id = orders.user_id
where orders.id is NULL;