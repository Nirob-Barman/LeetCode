-- 626. Exchange Seats

use leetcode;

-- Create table If Not Exists Seat (id int, student varchar(255));
-- Truncate table Seat;
-- insert into Seat (id, student) values ('1', 'Abbot');
-- insert into Seat (id, student) values ('2', 'Doris');
-- insert into Seat (id, student) values ('3', 'Emerson');
-- insert into Seat (id, student) values ('4', 'Green');
-- insert into Seat (id, student) values ('5', 'Jeames');

select if(id % 2 = 1 and id + 1 <= (select max(id) from Seat), id + 1, if(id % 2 = 0, id - 1, id)) as id, student
from Seat
order by id;