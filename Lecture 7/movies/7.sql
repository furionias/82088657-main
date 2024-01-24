SELECT m.title, r.rating from movies m
join ratings r on m.id = r.movie_id
Where m.year = 2010
ORDER BY r.rating DESC, m.title ASC;
