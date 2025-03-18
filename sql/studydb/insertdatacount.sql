-- 各テーブルのデータ件数を取得
SELECT 'usr' AS table_name, COUNT(*) AS record_count FROM usr
UNION ALL
SELECT 'quest', COUNT(*) FROM quest
UNION ALL
SELECT 'books', COUNT(*) FROM books
UNION ALL
SELECT 'author_books', COUNT(*) FROM author_books
UNION ALL
SELECT 'author', COUNT(*) FROM author
UNION ALL
SELECT 'category', COUNT(*) FROM category
UNION ALL
SELECT 'rental', COUNT(*) FROM rental
UNION ALL
SELECT 'employee', COUNT(*) FROM employee
UNION ALL
SELECT 'time_card', COUNT(*) FROM time_card
UNION ALL
SELECT 'depart', COUNT(*) FROM depart;
