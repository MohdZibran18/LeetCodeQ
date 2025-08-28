select e.name as Customers
from Customers e
where e.id not in (
    select customerId 
    from Orders
);
