use leetcode;

Create table If Not Exists Salary (id int, name varchar(100), sex char(1), salary int);
Truncate table Salary;
insert into Salary (id, name, sex, salary) values ('1', 'A', 'm', '2500');
insert into Salary (id, name, sex, salary) values ('2', 'B', 'f', '1500');
insert into Salary (id, name, sex, salary) values ('3', 'C', 'm', '5500');
insert into Salary (id, name, sex, salary) values ('4', 'D', 'f', '500');

update Salary
set sex = 
	case sex
		when 'm' then 'f'
        else 'm'
	end;