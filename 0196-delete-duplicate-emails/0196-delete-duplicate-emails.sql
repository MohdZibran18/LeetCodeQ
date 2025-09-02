# Write your MySQL query statement below
delete p2 from Person as p1, Person as p2
where p2.email=p1.email and p2.id > p1.id;