use leetcode;

-- Create table If Not Exists Weather (id int, recordDate date, temperature int);
-- Truncate table Weather;
-- insert into Weather (id, recordDate, temperature) values ('1', '2015-01-01', '10');
-- insert into Weather (id, recordDate, temperature) values ('2', '2015-01-02', '25');
-- insert into Weather (id, recordDate, temperature) values ('3', '2015-01-03', '20');
-- insert into Weather (id, recordDate, temperature) values ('4', '2015-01-04', '30');

select c.id
from Weather as c, Weather as p
where datediff(c.recordDate, p.recordDate) = 1 and c.temperature > p.temperature;


-- Date Difference Condition:
-- WHERE DATEDIFF(c.recordDate, p.recordDate) = 1: 
-- This condition checks if the date in c (current) is exactly one day after the date in p (previous).
-- The DATEDIFF function calculates the number of days between the two dates. 
-- If it equals 1, it means that c.recordDate is the day after p.recordDate.