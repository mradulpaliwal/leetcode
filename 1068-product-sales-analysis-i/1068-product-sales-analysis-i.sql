# Write your MySQL query statement below
select Product.product_name,Sales.year,Sales.price
from Product
left join Sales on Product.product_id=Sales.product_id
Where   Sales.year IS NOT NULL OR Sales.price IS NOT NULL;