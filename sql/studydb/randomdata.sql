INSERT INTO category (category_name) VALUES
('データベース'), ('プログラミング'), ('機械学習'), ('ネットワーク'), ('システム管理'),
('IT戦略'), ('UXデザイン'), ('プロジェクト管理'), ('クラウド'), ('情報セキュリティ');

INSERT INTO author (author_name, birth_year) VALUES
('山田 太郎', 1975), ('佐藤 花子', 1980), ('鈴木 一郎', 1965), ('高橋 二郎', 1970),
('伊藤 三郎', 1985), ('渡辺 美咲', 1990), ('中村 健', 1960), ('小林 明', 1955),
('加藤 結衣', 1995), ('山本 直樹', 1978), ('田中 大輔', 1982), ('松本 由美', 1988),
('井上 俊介', 1992), ('福田 未来', 1976), ('岡田 涼', 1983), ('森本 直子', 1989),
('藤田 優', 1991), ('原田 大輔', 1984), ('青木 茜', 1993), ('川口 遼', 1986),
('長谷川 奏', 1997), ('大西 美和', 1980), ('今井 悠斗', 1979), ('竹内 彩花', 1985),
('西村 亮', 1998);

INSERT INTO books (title, category_id, author_id, published_year)
SELECT 
    CONCAT('書籍_', category_id, '_', author_id),
    category_id,
    author_id,
    FLOOR(RAND() * (2023 - 1990 + 1) + 1990)  -- 1990年から2023年の間のランダムな年
FROM (SELECT category_id FROM category ORDER BY RAND() LIMIT 25) AS c
JOIN (SELECT author_id FROM author ORDER BY RAND() LIMIT 25) AS a;

INSERT INTO usr (user_name, email)
SELECT 
    CONCAT('ユーザー_', FLOOR(RAND() * 1000)),
    CONCAT('user', FLOOR(RAND() * 1000), '@example.com')
FROM (SELECT 1 UNION ALL SELECT 2 UNION ALL SELECT 3 UNION ALL SELECT 4 UNION ALL SELECT 5) t1,
     (SELECT 1 UNION ALL SELECT 2 UNION ALL SELECT 3 UNION ALL SELECT 4 UNION ALL SELECT 5) t2
LIMIT 25;

INSERT INTO rental (user_id, book_id, rental_date, return_date)
SELECT 
    u.user_id, b.book_id, 
    DATE_ADD('2024-01-01', INTERVAL FLOOR(RAND() * 90) DAY),
    CASE WHEN RAND() > 0.5 THEN DATE_ADD('2024-01-01', INTERVAL FLOOR(RAND() * 120) DAY) ELSE NULL END
FROM (SELECT user_id FROM usr ORDER BY RAND() LIMIT 25) AS u
JOIN (SELECT book_id FROM books ORDER BY RAND() LIMIT 25) AS b;

INSERT INTO depart (department_name) VALUES
('営業部'), ('開発部'), ('人事部'), ('経理部'), ('研究部'), ('マーケティング部'), ('IT部'), ('総務部');

INSERT INTO employee (name, department_id, salary, manager_id)
SELECT 
    CONCAT('社員_', FLOOR(RAND() * 1000)),
    department_id,
    FLOOR(RAND() * (800000 - 300000 + 1) + 300000),  -- 30万〜80万のランダムな給与
    NULL
FROM (SELECT department_id FROM depart ORDER BY RAND() LIMIT 10) AS d;

-- 部下データを追加 (既存の社員を上司に設定)
INSERT INTO employee (name, department_id, salary, manager_id)
SELECT 
    CONCAT('社員_', FLOOR(RAND() * 1000)),
    department_id,
    FLOOR(RAND() * (600000 - 200000 + 1) + 200000),  -- 20万〜60万のランダムな給与
    e.employee_id
FROM employee e
ORDER BY RAND()
LIMIT 15;

INSERT INTO time_card (employee_id, work_date, check_in, check_out)
SELECT 
    e.employee_id,
    DATE_ADD('2024-01-01', INTERVAL FLOOR(RAND() * 60) DAY),
    TIME_FORMAT(SEC_TO_TIME(FLOOR(RAND() * (36000 - 28800) + 28800)), '%H:%i:%s'),  -- 08:00〜10:00のランダムな出勤時間
    TIME_FORMAT(SEC_TO_TIME(FLOOR(RAND() * (64800 - 57600) + 57600)), '%H:%i:%s')   -- 16:00〜18:00のランダムな退勤時間
FROM (SELECT employee_id FROM employee ORDER BY RAND() LIMIT 25) AS e;

INSERT INTO quest (user_id, response, created_at)
SELECT 
    user_id,
    CASE FLOOR(RAND() * 5)
        WHEN 0 THEN 'とても満足'
        WHEN 1 THEN '満足'
        WHEN 2 THEN '普通'
        WHEN 3 THEN 'やや不満'
        ELSE '不満'
    END AS response,
    DATE_ADD('2024-01-01', INTERVAL FLOOR(RAND() * 90) DAY) AS created_at
FROM (SELECT user_id FROM usr ORDER BY RAND() LIMIT 25) AS u;

INSERT INTO author_books (author_id, book_id)
SELECT 
    a.author_id,
    b.book_id
FROM (SELECT author_id FROM author ORDER BY RAND() LIMIT 25) AS a
JOIN (SELECT book_id FROM books ORDER BY RAND() LIMIT 25) AS b
ON RAND() > 0.5  -- 50%の確率で組み合わせを作る
LIMIT 25;
