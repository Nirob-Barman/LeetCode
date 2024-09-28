use leetcode;

-- Create table If Not Exists Visits(visit_id int, customer_id int);
-- Create table If Not Exists Transactions(transaction_id int, visit_id int, amount int);
-- Truncate table Visits;
-- insert into Visits (visit_id, customer_id) values ('1', '23');
-- insert into Visits (visit_id, customer_id) values ('2', '9');
-- insert into Visits (visit_id, customer_id) values ('4', '30');
-- insert into Visits (visit_id, customer_id) values ('5', '54');
-- insert into Visits (visit_id, customer_id) values ('6', '96');
-- insert into Visits (visit_id, customer_id) values ('7', '54');
-- insert into Visits (visit_id, customer_id) values ('8', '54');
-- Truncate table Transactions;
-- insert into Transactions (transaction_id, visit_id, amount) values ('2', '5', '310');
-- insert into Transactions (transaction_id, visit_id, amount) values ('3', '5', '300');
-- insert into Transactions (transaction_id, visit_id, amount) values ('9', '5', '200');
-- insert into Transactions (transaction_id, visit_id, amount) values ('12', '1', '910');
-- insert into Transactions (transaction_id, visit_id, amount) values ('13', '2', '970');

-- select * from Visits;
-- select * from Transactions;

select v.customer_id, count(v.customer_id) as count_no_trans
from Visits as v
left join Transactions as t
on v.visit_id = t.visit_id
where t.visit_id is null
group by v.customer_id;

-- For Customer 54:
-- They visited three times (visit IDs 5, 7, and 8).
-- Only visit ID 5 had transactions, meaning visits 7 and 8 had no transactions.
-- Thus, the output would reflect that Customer 54 had 2 visits without transactions.