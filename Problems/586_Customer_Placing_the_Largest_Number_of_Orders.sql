use leetcode;

-- Create table If Not Exists orders (order_number int, customer_number int);
-- Truncate table orders;
-- insert into orders (order_number, customer_number) values ('1', '1');
-- insert into orders (order_number, customer_number) values ('2', '2');
-- insert into orders (order_number, customer_number) values ('3', '3');
-- insert into orders (order_number, customer_number) values ('4', '3');

select customer_number 
from orders
group by customer_number
order by COUNT(customer_number) desc
-- order by COUNT(*) desc
limit 1;