# Write your MySQL query statement below
SELECT email from Person GROUP BY email having COUNT(email)>1
#select Email from Person group by EMAIL having count(EMAIL) > 1