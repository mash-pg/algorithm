CREATE DATABASE employee;

USE employee;

CREATE TABLE employees (
    id INT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    department VARCHAR(100),
    managerId INT,
    FOREIGN KEY (managerId) REFERENCES employees(id)
);

INSERT INTO employees (id, name, department, managerId) VALUES
(101, 'John', 'A', NULL),
(102, 'Dan', 'A', 101),
(103, 'James', 'A', 101),
(104, 'Amy', 'A', 101),
(105, 'Anne', 'A', 101),
(106, 'Ron', 'B', 101);


-- id is the primary key (column with unique values) for this table.
-- Each row of this table indicates the name of an employee, their department, and the id of their manager.
-- If managerId is null, then the employee does not have a manager.
-- No employee will be the manager of themself.

SELECT
    e.name as name
FROM
    employees e
    join employees m on e.id = m.managerId
group by
    e.id,
    e.name
having
    count(m.id) >= 5;

