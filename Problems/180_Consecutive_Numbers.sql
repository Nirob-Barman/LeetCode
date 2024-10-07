use leetcode;

-- Create table If Not Exists Logs (id int, num int);
-- Truncate table Logs;
-- insert into Logs (id, num) values ('1', '1');
-- insert into Logs (id, num) values ('2', '1');
-- insert into Logs (id, num) values ('3', '1');
-- insert into Logs (id, num) values ('4', '2');
-- insert into Logs (id, num) values ('5', '1');
-- insert into Logs (id, num) values ('6', '2');
-- insert into Logs (id, num) values ('7', '2');

select distinct l1.num as ConsecutiveNums
from Logs l1
join Logs l2 on l1.id = l2.id - 1
join logs l3 on l1.id = l3.id - 2
where l1.num = l2.num and l2.num = l3.num;