# Write your MySQL query statement below
SELECT product_id, product_name
FROM Sales
JOIN Product
using(product_id)
GROUP BY product_id
Having min(sale_date)>='2019-01-01' AND MAX(sale_date)<='2019-03-31'


