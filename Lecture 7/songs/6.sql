SELECT s. name from songs s
JOIN artists a ON s.artist_id = a.id
Where a.name = 'Post Malone'

