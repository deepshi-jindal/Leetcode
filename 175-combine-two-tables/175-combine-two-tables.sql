# Write your MySQL query statement below
SELECT p.firstName, p.lastName, a.city,a.state

from Person p left join Address a on a.personid = p.personid