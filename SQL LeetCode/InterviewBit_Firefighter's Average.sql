-- Given a table FIREFIGHTERS, query the average of all the people saved by the Firefighters whose CountryCode is PM.


SELECT AVG(PeopleSaved) AS "AVG(PeopleSaved)"
FROM FIREFIGHTERS
WHERE CountryCode Like 'PM'