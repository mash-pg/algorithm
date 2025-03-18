CREATE DATABASE BOOK;

USE BOOK;

-- ユーザーテーブル
CREATE TABLE usr (
    user_id INT PRIMARY KEY AUTO_INCREMENT,
    user_name VARCHAR(255) NOT NULL,
    email VARCHAR(255) UNIQUE NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

-- アンケート回答テーブル
CREATE TABLE quest (
    quest_id INT PRIMARY KEY AUTO_INCREMENT,
    user_id INT NOT NULL,
    response TEXT NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (user_id) REFERENCES usr(user_id) ON DELETE CASCADE
);

-- 書籍分類テーブル
CREATE TABLE category (
    category_id INT PRIMARY KEY AUTO_INCREMENT,
    category_name VARCHAR(255) NOT NULL
);

-- 著者情報テーブル
CREATE TABLE author (
    author_id INT PRIMARY KEY AUTO_INCREMENT,
    author_name VARCHAR(255) NOT NULL,
    birth_year INT
);

-- 書籍情報テーブル
CREATE TABLE books (
    book_id INT PRIMARY KEY AUTO_INCREMENT,
    title VARCHAR(255) NOT NULL,
    category_id INT NOT NULL,
    author_id INT NOT NULL,
    published_year INT,
    FOREIGN KEY (category_id) REFERENCES category(category_id) ON DELETE CASCADE,
    FOREIGN KEY (author_id) REFERENCES author(author_id) ON DELETE CASCADE
);

-- 著者-書籍情報テーブル（多対多）
CREATE TABLE author_books (
    author_id INT NOT NULL,
    book_id INT NOT NULL,
    PRIMARY KEY (author_id, book_id),
    FOREIGN KEY (author_id) REFERENCES author(author_id) ON DELETE CASCADE,
    FOREIGN KEY (book_id) REFERENCES books(book_id) ON DELETE CASCADE
);

-- 書籍貸し出し記録テーブル
CREATE TABLE rental (
    rental_id INT PRIMARY KEY AUTO_INCREMENT,
    user_id INT NOT NULL,
    book_id INT NOT NULL,
    rental_date DATE NOT NULL,
    return_date DATE,
    FOREIGN KEY (user_id) REFERENCES usr(user_id) ON DELETE CASCADE,
    FOREIGN KEY (book_id) REFERENCES books(book_id) ON DELETE CASCADE
);

-- 所属部署テーブル
CREATE TABLE depart (
    department_id INT PRIMARY KEY AUTO_INCREMENT,
    department_name VARCHAR(255) NOT NULL
);

-- 社員テーブル
CREATE TABLE employee (
    employee_id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    department_id INT NOT NULL,
    salary INT NOT NULL,
    manager_id INT,
    FOREIGN KEY (department_id) REFERENCES depart(department_id) ON DELETE CASCADE,
    FOREIGN KEY (manager_id) REFERENCES employee(employee_id) ON DELETE SET NULL
);

-- タイムカードテーブル
CREATE TABLE time_card (
    record_id INT PRIMARY KEY AUTO_INCREMENT,
    employee_id INT NOT NULL,
    work_date DATE NOT NULL,
    check_in TIME NOT NULL,
    check_out TIME NOT NULL,
    FOREIGN KEY (employee_id) REFERENCES employee(employee_id) ON DELETE CASCADE
);
