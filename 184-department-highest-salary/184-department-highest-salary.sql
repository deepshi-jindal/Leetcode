# Write your MySQL query statement below
SELECT d.name AS Department, e.name as Employee ,e.Salary
FROM Department d
JOIN Employee e
ON e.DepartmentID = d.id AND
e.salary =(SELECT MAX(Salary)
          from Employee e2
          where e2.departmentID=d.id);
