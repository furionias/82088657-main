Select DISTINCT name From people p
join directors d ON p.id = d.person_id
JOIN movies m ON d.movie_id = m.id
Join ratings r ON m.id = r.movie_id
WHERE r.rating >=9.0;
