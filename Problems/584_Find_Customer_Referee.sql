-- 584. Find Customer Referee

use LeetCode;

-- Create table If Not Exists Customer (id int, name varchar(25), referee_id int);
-- Truncate table Customer;
-- insert into Customer (id, name, referee_id) values ('1', 'Will', NULL);
-- insert into Customer (id, name, referee_id) values ('2', 'Jane', NULL);
-- insert into Customer (id, name, referee_id) values ('3', 'Alex', '2');
-- insert into Customer (id, name, referee_id) values ('4', 'Bill', NULL);
-- insert into Customer (id, name, referee_id) values ('5', 'Zack', '1');
-- insert into Customer (id, name, referee_id) values ('6', 'Mark', '2');

select name from Customer where referee_id != 2 or referee_id is null;
-- NULL/null cannot be directly compared using = Operator
-- The expression referee_id = NULL will always evaluate to FALSE (or UNKNOWN), so this part of the condition won’t ever return any rows