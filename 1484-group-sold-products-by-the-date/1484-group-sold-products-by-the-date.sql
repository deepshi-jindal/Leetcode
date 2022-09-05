# Write your MySQL query statement below
SELECT sell_date, COUNT(distinct product) AS num_sold, GROUP_CONCAT(distinct product ORDER BY product) as products
FROM Activities
GROUP BY sell_date
ORDER BY sell_date