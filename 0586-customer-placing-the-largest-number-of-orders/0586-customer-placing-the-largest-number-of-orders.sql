# Write your MySQL query statement below
select max(customer_number) as  customer_number  from  Orders 
group by customer_number
having count(customer_number)>1
order by  count(customer_number) desc
limit 1; 