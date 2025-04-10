use leetcode;

-- Create table If Not Exists Person (Id int, Email varchar(255));
-- Truncate table Person;
-- insert into Person (id, email) values ('1', 'john@example.com');
-- insert into Person (id, email) values ('2', 'bob@example.com');
-- insert into Person (id, email) values ('3', 'john@example.com');

select p1.id, p1.email
from Person p1, Person p2
where p1.email = p2.email and p1.id > p2.id;

delete p1
from Person p1, Person p2
where p1.email = p2.email and p1.id > p2.id;

delete from Person where id not in
(select id from (select min(id) as id from Person group by email) as theView);
