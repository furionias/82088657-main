SELECT p.name from people p
Join stars s on p.id = s.person_id
Join movies m on s.movie_id = m.id
Where m.title = 'Toy Story'


