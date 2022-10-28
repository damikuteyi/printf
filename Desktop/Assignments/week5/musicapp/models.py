from django.db import models
from datetime import datetime

class Artiste(models.Model):
    first_name = models.CharField(max_length=400)
    last_name = models.CharField(max_length=400)
    age = models.IntegerField()
    
    def __str__(self):
        return self.first_name

class Song(models.Model):
    artiste_id = models.ForeignKey(Artiste, on_delete=models.CASCADE)
    title = models.CharField(max_length=40)
    released_date = models.DateField(default=datetime.today)
    likes = models.IntegerField()

    def __str__(self):
        return self.title

class Lyric(models.Model):
    song_id = models.ForeignKey(Song, models.ForeignKey(Song, on_delete=models.CASCADE))
    content = models.CharField(max_length=400)

    def __str__(self):
        return self.content