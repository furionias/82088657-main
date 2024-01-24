SELECT m.title From movies m
join stars s on m.id = s.movie_id
join people p on s.person_id = p.id
join ratings r on m.id = r.movie_id
Where p.name = 'Chadwick Boseman'
ORDER BY r.rating DESC
LIMIT 5;
