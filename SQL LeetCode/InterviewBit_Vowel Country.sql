-- Given a table PLACES, count the number of Countries which end with a vowel.
SELECT count(id) AS "COUNT(Country)"
FROM PLACES
WHERE Country LIKE '%a'
   OR Country LIKE '%e'
   OR Country LIKE '%i'
   OR Country LIKE '%o'
   OR Country LIKE '%u';