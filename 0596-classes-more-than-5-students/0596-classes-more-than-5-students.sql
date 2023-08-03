# Write your MySQL query statement below
SELECT class 
FROM courses
GROUP by class
HAVING(COUNT( DISTINCT student)>=5)