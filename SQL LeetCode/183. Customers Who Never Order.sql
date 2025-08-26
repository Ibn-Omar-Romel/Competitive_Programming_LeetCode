-- Write a solution to find all customers who never order anything.

-- Using NOT IN
SELECT C.name AS Customers
FROM Customers C
WHERE C.id NOT IN (
    SELECT O.customerId 
    FROM Orders O
);


-- Using LEFT JOIN and IS NULL
SELECT C.name AS Customers
FROM Customers C
LEFT JOIN Orders O
  ON C.id = O.customerId
WHERE O.customerId IS NULL;