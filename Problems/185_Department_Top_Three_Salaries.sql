-- 185. Department Top Three Salaries

use leetcode;

-- Create table If Not Exists Employee (id int, name varchar(255), salary int, departmentId int);
-- Create table If Not Exists Department (id int, name varchar(255));
-- Truncate table Employee;
-- insert into Employee (id, name, salary, departmentId) values ('1', 'Joe', '85000', '1');
-- insert into Employee (id, name, salary, departmentId) values ('2', 'Henry', '80000', '2');
-- insert into Employee (id, name, salary, departmentId) values ('3', 'Sam', '60000', '2');
-- insert into Employee (id, name, salary, departmentId) values ('4', 'Max', '90000', '1');
-- insert into Employee (id, name, salary, departmentId) values ('5', 'Janet', '69000', '1');
-- insert into Employee (id, name, salary, departmentId) values ('6', 'Randy', '85000', '1');
-- insert into Employee (id, name, salary, departmentId) values ('7', 'Will', '70000', '1');
-- Truncate table Department;
-- insert into Department (id, name) values ('1', 'IT');
-- insert into Department (id, name) values ('2', 'Sales');


select d.name as Department, e.name as Employee, e.salary as Salary
from employee e
join Department d on e.departmentId = d.id
where (select count(distinct salary) from Employee emp where emp.departmentId = e.departmentId and emp.salary >= e.salary) <= 3
order by Department, Salary desc;

select Department, Employee, Salary
from (
select d.name as Department, e.name as Employee, e.salary as Salary,
dense_rank() over(partition by departmentId order by Salary desc) as d_rank
from employee e
join Department d on e.departmentId = d.id
) T 
where d_rank <= 3;
