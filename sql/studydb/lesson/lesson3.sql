-- 🎯 Lesson 3 の目標
-- 集計関数（COUNT, SUM, AVG, MAX, MIN）を使って数値をまとめて分析する

-- GROUP BY を使って「グループごと」に集計する

select count(*) from users;

select AVG(age) from users;

select city, count(*) from users
group by city;

select city,count(*) as count from users
group by city
having count(*) >= 2;

-- users テーブルに登録されているユーザーの合計人数を取得してください

select count(*) from users;

-- 年齢の 平均値 を求めてください
select avg(age) from users;

-- city ごとに人数をカウントして表示してください（列名：city, count）
select city,count(*) as count from users 
group by city; 

-- city ごとの人数が 2人以上 の都市だけ表示してください
select city from users 
group by city 
having count(city) >= 2; 
