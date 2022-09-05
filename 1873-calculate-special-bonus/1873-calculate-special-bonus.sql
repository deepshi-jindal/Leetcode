# Write your MySQL query statement below
SELECT employee_id,
if(employee_id% 2!=0 and name NOT LIKE 'M%',salary,0) as bonus
from Employees ORDER BY employee_id






