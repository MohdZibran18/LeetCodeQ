# Write your MySQL query statement below
select name from Salesperson 
where sales_id not in (select sales_id  from Company as c
join Orders  as o 
on c.com_id =o.com_id 
where name = 'RED');