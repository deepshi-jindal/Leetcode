# Write your MySQL query statement below
select id, IF(p_id is NULL, "Root", IF(id IN (select distinct p_id from Tree), "Inner", "Leaf")
) as type from Tree