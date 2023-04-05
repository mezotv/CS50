SELECT "title" FROM "longlist" 
...> WHERE "title" LIKE '%love%';
SELECT "title" FROM "longlist" 
...> WHERE "title" LIKE 'The%';
SELECT "title" FROM "longlist" 
...> WHERE "title" LIKE 'The %';
SELECT "title" FROM "longlist" 
...> WHERE "title" LIKE 'The%Love%';

SELECT "title" FROM "longlist"
...> WHERE "title" LIKE 'T_st';
SELECT "title" FROM "longlist"
...> WHERE "title" LIKE 'T___';

SELECT "title" FROM "longlist"
...> WHERE "title" LIKE 'pyre';

SELECT "title" FROM "longlist"
...> WHERE "title" = 'pyre';