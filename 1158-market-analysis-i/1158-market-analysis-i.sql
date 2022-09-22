# Write your MySQL query statement below
SELECT u.user_id as buyer_id, join_date,
ifnull(COUNT(order_date), 0) AS orders_in_2019
from users as u
left join
ORDERS as o
ON u.user_id=o.buyer_id
and year(order_date)='2019'
group by u.user_id




