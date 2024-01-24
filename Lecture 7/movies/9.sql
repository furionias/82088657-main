SELECT DISTINCT p.name FROM people p
Join stars s on p.id = s.person_id
Join movies m on s.movie_id = m.id
Where m.year = 2004
ORDEr BY p.birth
