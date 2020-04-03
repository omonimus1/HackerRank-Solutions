/*Given the CITY and COUNTRY tables, query the names of all the continents 
(COUNTRY.Continent) and their respective average city populations (CITY.Population) 
rounded down to the nearest integer.*/
SELECT COUNTRY.CONTINENT , FLOOR(AVG(CITY.POPULATION))
FROM COUNTRY , CITY 
WHERE COUNTRY.CODE = CITY.COUNTRYCODE 
GROUP BY COUNTRY.CONTINENT;