# Write your MySQL query statement below
# SELECT * from Users where mail
# REGEXP '^[A-Za-z][a-zA-Z0-9_.-]*@leetcode.com$'
SELECT * FROM Users WHERE mail REGEXP '^[a-zA-Z][a-zA-Z0-9_.-]*@leetcode\\.com$'
