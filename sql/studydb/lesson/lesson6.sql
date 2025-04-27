use testdb;
show tables;
create table users (
  id int,
  name varchar(50),
  age int,
  city varchar(50)
);

insert into users (id,name,age,city)
values(4,'Mika',22,'Fukuoka');

insert into users (id,name,age,city)
values(4,'Taro',29,'Fukuoka');


update users
set id = 2
where name = 'Taro';

SELECT * FROM users;

insert into users(id,name,age,city)
values(1,'Satoshi',29,'Sapporo');


SELECT * FROM users;

update users
set age = 21
where name = 'Ken';

show tables;

delete from orders where quantity <= 1;

SELECT * FROM orders;;
