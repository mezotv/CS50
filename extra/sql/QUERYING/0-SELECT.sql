SELECT * FROM "longlist";
SELECT "title" FROM "longlist";
SELECT "title", "author" FROM "longlist";

SELECT "title" FROM "longlist" LIMIT 10;

SELECT "title", "author" FROM "longlist" WHERE "year" = 2022;

SELECT "title", "format" FROM "longlist" WHERE "format" != 'hardcover';
SELECT "title", "format" FROM "longlist" WHERE "format" <> 'hardcover';
SELECT "title", "format" FROM "longlist" WHERE NOT "format" = 'hardcover';

SELECT "title", "author" FROM "longlist" WHERE "year" = 2022 OR "year" = 2023;

SELECT "title", "format" FROM "longlist"
...> WHERE "year" = 2022 AND "format" = 'hardcover';
