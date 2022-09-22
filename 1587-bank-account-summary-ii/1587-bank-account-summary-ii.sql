# Write your MySQL query statement below

SELECT u.name as name, SUM(t.amount) as balance
FROM 
Users u JOIN Transactions t on u.account=t.account
GROUP BY
t.account HAVING balance>10000;


