SQLBOLT EX1:

Find the title of each film 
Find the director of each film
Find the title and director of each film
Find the title and year of each film
Find all the information about each film

SELECT TITLE FROM MOVIES;
SELECT DIRECTOR FROM MOVIES;
SELECT TITLE,DIRECTOR FROM MOVIES;
SELECT TITLE,YEAR FROM MOVIES;
SELECT * FROM MOVIES;


SQLBOLT EX2:
Find the movie with a row id of 6
Find the movies released in the years between 2000 and 2010
Find the movies not released in the years between 2000 and 2010
Find the first 5 Pixar movies and their release year

SELECT TITLE FROM MOVIES WHERE ID=6;
SELECT TITLE FROM MOVIES WHERE YEAR BETWEEN 2000 AND 2010;
SELECT TITLE FROM MOVIES WHERE YEAR NOT BETWEEN 2000 AND 2010;
SELECT TITLE,YEAR FROM MOVIES WHERE ID<=5;


SQLBOLT EX3:

Find all the Toy Story movies ✓
Find all the movies directed by John Lasseter
Find all the movies (and director) not directed by John Lasseter
Find all the WALL-* movies

SELECT TITLE FROM MOVIES WHERE TITLE LIKE "%TOY STORY%";
SELECT TITLE FROM MOVIES WHERE DIRECTOR LIKE "JOHN LASSETER";
SELECT TITLE,DIRECTOR FROM MOVIES WHERE DIRECTOR NOT LIKE "JOHN LASSETER";
SELECT TITLE FROM MOVIES WHERE TITLE LIKE "%WALL%";

SQLBOLT EX4;

List all directors of Pixar movies (alphabetically), without duplicates 
List the last four Pixar movies released (ordered from most recent to least)
List the first five Pixar movies sorted alphabetically
List the next five Pixar movies sorted alphabetically

SELECT dISTINCT(DIRECTOR) FROM MOVIES ORDER BY DIRECTOR;
SELECT title FROM MOVIES ORDER BY YEAR DESC LIMIT 4;
SELECT TITLE FROM MOVIES ORDER BY TITLE LIMIT 5 ;
SELECT TITLE FROM MOVIES ORDER BY TITLE LIMIT 5 OFFSET 5;  




