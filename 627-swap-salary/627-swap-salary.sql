# Write your MySQL query statement b
UPDATE Salary set sex = (CASE WHEN sex='m' THEN 'f' else 'm' END)