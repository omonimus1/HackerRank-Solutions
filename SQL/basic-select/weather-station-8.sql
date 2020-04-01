/*
Select the names of the cities which have vowels as both first and last characters from station table
*/

SELECT CITY
FROM STATION
WHERE  (CITY LIKE 'a%' OR  CITY LIKE 'e%' OR CITY LIKE 'i%' OR CITY LIKE 'o%' OR CITY LIKE 'u%') AND  (CITY LIKE '%a' OR  CITY LIKE '%e' OR  CITY LIKE '%i' OR  CITY LIKE '%o' OR CITY LIKE '%u');