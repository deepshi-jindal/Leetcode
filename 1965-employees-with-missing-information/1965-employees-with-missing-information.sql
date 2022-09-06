# Write your MySQL query statement below
SELECT employee_id 
FROM 
(
SELECT employee_id from Employees
    UNION ALL
SELECT employee_id from Salaries
)emp
GROUP BY employee_id
HAVING COUNT(employee_id)=1
ORDER BY 1