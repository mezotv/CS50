SELECT "title", "year" FROM "longlist"
...> WHERE "year" >= 2019 AND "year" <= 2022;


SELECT "title", "year" FROM "longlist"
...> WHERE "year" BETWEEN 2019 AND 2022;


SELECT "title", "rating", "votes" FROM "longlist"
...> WHERE "rating" > 4.0 AND Votes > 1000;

SELECT "title", "pages" FROM "longlist"
...> WHERE "pages" < 300;

SELECT "title", "rating" FROM "longlist"
...> ORDER BY "rating" DESC LIMIT 10;

SELECT "title", "rating" FROM "longlist"
...> ORDER BY "rating" DESC "votes" DESC;
...> LIMIT 10;

SELECT "title", "rating" FROM "longlist"
...> WHERE "rating" = 4.932;

SELECT "title" FROM "longlist"
...> ORDER BY "title" ASC;
SELECT "title" FROM "longlist"
...> ORDER BY "title" DESC;