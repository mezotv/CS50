SELECT AVG("rating") FROM "longlist";

SELECT ROUND(AVG("rating"), 2) FROM "longlist";

SELECT ROUND(AVG("rating"), 2) AS "Average Rating" 
...> FROM "longlist";

SELECT MIN("rating") FROM "longlist";
SELECT MAX("rating") FROM "longlist";
SELECT SUM("rating") FROM "longlist";

SELECT COUNT(*) FROM "longlist";
SELECT COUNT("translator") FROM "longlist";
SELECT COUNT(DISTINCT "translator") FROM "longlist";

SELECT DISTINCT "publisher" FROM "longlist" 


SELECT MAX("title"), MIN("title") FROM "longlist";