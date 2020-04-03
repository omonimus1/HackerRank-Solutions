/* 
Select the name of the cities that do not start with vowels. The result cannot contains duplicate. 
*/

SELECT DISTINCT(CITY)
FROM STATION
WHERE CITY NOT LIKE 'a%' AND CITY NOT LIKE 'e%' AND CITY NOT LIKE 'i%' AND CITY NOT LIKE 'o%' AND CITY NOT LIKE 'u%';