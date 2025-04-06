-- users テーブルにサンプルデータを挿入
use testdb;

INSERT INTO users (id, name, age, city) VALUES
(1, '太郎', 25, 'Tokyo'),
(2, 'Hanako', 32, 'Osaka'),
(3, 'Ken', 19, 'Nagoya'),
(4, 'Yuki', 28, 'Tokyo');

select name,age from users where city = 'Tokyo';

select * from users where age < 20;