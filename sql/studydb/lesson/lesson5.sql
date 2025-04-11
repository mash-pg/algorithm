-- 🎯 Lesson 5 の目標
-- サブクエリ（Subquery） の使い方を理解する

-- WITH句（共通テーブル式 / CTE） の使い方をマスターする

-- ネストされたクエリや一時的なテーブルを使って、より柔軟な分析ができるようになる

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



select name,age from users where age > (select avg(age) from users);
+--------+------+
| name   | age  |
+--------+------+
| Hanako |   32 |
| Yuki   |   28 |
+--------+------+
2 rows in set (0.00 sec)

select avg(age) as avg_age from users
+---------+
| avg_age |
+---------+
| 26.0000 |
+---------+
1 row in set (0.00 sec)

with average_age as (
  select avg(age) as avg_age from users
)
select name , age 
from users,average_age
where users.age > average_age.avg_age;

+--------+------+
| name   | age  |
+--------+------+
| Hanako |   32 |
| Yuki   |   28 |
+--------+------+
2 rows in set (0.01 sec)

-- users テーブルから、平均年齢より上の人を名前と年齢で抽出してください（サブクエリ使用）
select name, age from users where age > (select avg(age) from users);

-- orders テーブルから、注文数が一番多いユーザーのIDを抽出してください（サブクエリ）
select id from orders where quantity = (select max(quantity) from orders);

-- WITH句 を使って、city ごとの人数をまとめた表を定義し、それを使って 人数が2人以上の都市を表示してください
with city_group as (
  select city,count(name) as cnt from users group by city
)
select city from city_group where cnt >= 2;


