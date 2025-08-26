-- Given a table FIREFIGHTERS, find the largest difference between the number of people saved by 2 firefighters.

SELECT MAX(PeopleSaved) - MIN(PeopleSaved) AS A
FROM FIREFIGHTERS;
