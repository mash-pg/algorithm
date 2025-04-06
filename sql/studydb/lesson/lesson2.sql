-- 🎯 Lesson 2 の目標
-- WHERE で使う さまざまな演算子（=, <>, IN, LIKE など）を使えるようになる

-- データの並び替えに使う ORDER BY を理解する

-- 複数の条件を組み合わせる AND, OR を使えるようになる
select * from users;

SELECT * FROM users WHERE age >= 30;

select * from users where city in('tokyo','Osaka');

select * from users where name like 'Y%';

select * from users where age >= 25 and city = 'Tokyo';

select * from users order by age asc;

select * from users order by age desc;

-- 年齢が 25歳以上 の人を、年齢の 昇順 で表示（全カラム）

select * from users where age >= 25 ORDER BY age asc;

-- city が "Tokyo" または "Osaka" の人の名前と都市を表示
select name,city from users where city = 'Tokyo' or city = 'Osaka';

-- 名前が「K」で始まる人を全カラム表示

select * from users where name like 'K%';

-- 年齢が30歳以上 または city が "Nagoya" の人を全カラム表示

select * from users where age >= 30 or city = 'Nagoya'

