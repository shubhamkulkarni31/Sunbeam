mysql -u root -p


first we have to create user
create user 'classwork'@'localhost'
identified by 'shubham';

use mysql;

select user from user;

give permission

grant all on *.*
to
'classwork'@'localhost';

to save permission we have to do privilegs

flush privileges;

login to class work
create database hr;

use hr;
SOURCE DRAG AND DROP

SHOW TABLES;

mysql> SHOW TABLES;
+--------------+
| Tables_in_hr |
+--------------+
| countries    |
| departments  |
| employees    |
| job_history  |
| jobs         |
| locations    |
| regions      |
+--------------+
DESC employees;

select * from employees;

pager less -s;

select * from employeess
1. Write a query to display the first _ name , last _ name using
alias name “ First Name ", " Last Name ".
query;
select 'FIRST NAME' AS 'first name' from employee;

select LAST_NAME AS 'last name' from employees;
========================================

Write a query to get unique department ID from employee
table

desc departments;

select *from departments;

select * from departments
where
department_id= 120;

Write a query to get all employee details from the employee
table order by first name , descending ;

SELECT * FROM employees ORDER BY FIRST_NAME DESC;

4. Write a query to get the names ( first _ name , last _ name ),
salary , PF of all the employees ( PF is calculated as 15% of
salary )

select *
select data elements from the table

select * from employees;

select data elemnts from the table employees;



SELECT FIRST_NAME,LAST_NAME,SALARY*0.15 AS 'PF' FROM EMPLOYEES;

5. Write a query to get the employee ID , names ( first _ name ,
last _ name ), salary in ascending order of salary

select data elements from the employess tables order by

SELECT *FROM employees ORDER BY employee_id,first_name,last_name;

Write a query to get the total salaries payable to employees .


select(DISTINCT SALARY) AS TOTAL SALARY OF employees;


