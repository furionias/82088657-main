select m.title from movies m
join stars s on m.id = s.movie_id
Join people p on s.person_id = p.id
where p.name IN ('Johnny Depp', 'Helena Bonham Carter')
GROUP BY m. title
HAVING COUNT (DISTINCT p.name) = 2;
