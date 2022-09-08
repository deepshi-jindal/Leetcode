# Write your MySQL query statement below
Select name
FROM SalesPerson
where sales_id
NOT IN(
 Select s.sales_id FROM orders o
    INNER JOIN salesperson s ON o.sales_id = s.sales_id
    INNER JOIN company c ON o.com_id =c.com_id
    where c.name='RED'
);