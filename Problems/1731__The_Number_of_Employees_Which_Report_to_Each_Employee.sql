use leetcode;

-- Create table If Not Exists Employees(employee_id int, name varchar(20), reports_to int, age int);
-- Truncate table Employees;
-- insert into Employees (employee_id, name, reports_to, age) values ('9', 'Hercy', NULL, '43');
-- insert into Employees (employee_id, name, reports_to, age) values ('6', 'Alice', '9', '41');
-- insert into Employees (employee_id, name, reports_to, age) values ('4', 'Bob', '9', '36');
-- insert into Employees (employee_id, name, reports_to, age) values ('2', 'Winston', NULL, '37');

select e1.employee_id, e1.name, count(e2.reports_to) as reports_count, round(avg(e2.age)) as average_age
from Employees as e1
join Employees as e2
on e1.employee_id =  e2.reports_to
group by e1.employee_id, e1.name
order by e1.employee_id
