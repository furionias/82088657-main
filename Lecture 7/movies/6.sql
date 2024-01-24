SELECT AVG(rating) from ratings
Where movie_id in (SELECT id FROM movies WHERE year = 2012);
