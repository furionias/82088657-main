SELECT AVG(energy) as avg_energy
From songs

Where artist_id = (
    Select if from artists where name = 'Drake'
)
