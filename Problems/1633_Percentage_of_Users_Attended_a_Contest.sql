use leetcode;

-- drop table Users;

-- Create table If Not Exists Users (user_id int, user_name varchar(20));
-- Create table If Not Exists Register (contest_id int, user_id int);
-- Truncate table Users;
-- insert into Users (user_id, user_name) values ('6', 'Alice');
-- insert into Users (user_id, user_name) values ('2', 'Bob');
-- insert into Users (user_id, user_name) values ('7', 'Alex');
-- Truncate table Register;
-- insert into Register (contest_id, user_id) values ('215', '6');
-- insert into Register (contest_id, user_id) values ('209', '2');
-- insert into Register (contest_id, user_id) values ('208', '2');
-- insert into Register (contest_id, user_id) values ('210', '6');
-- insert into Register (contest_id, user_id) values ('208', '6');
-- insert into Register (contest_id, user_id) values ('209', '7');
-- insert into Register (contest_id, user_id) values ('209', '6');
-- insert into Register (contest_id, user_id) values ('215', '7');
-- insert into Register (contest_id, user_id) values ('208', '7');
-- insert into Register (contest_id, user_id) values ('210', '2');
-- insert into Register (contest_id, user_id) values ('207', '2');
-- insert into Register (contest_id, user_id) values ('210', '7');

select r.contest_id, round((count(r.contest_id) / (select count(*) from Users) * 100), 2) as percentage
from Users as u
join Register as r
on u.user_id = r.user_id
group by r.contest_id
order by percentage desc, r.contest_id
