from django.db import models
from django.utils import timezone

class MoneyFlow(models.Model):
    title = models.CharField(max_length=200)
    details = models.CharField(max_length=3000, null=True)
    amount = models.FloatField()
    owner = models.CharField(max_length=20)
    is_income = models.BooleanField(default=False)
    occured_date = models.DateTimeField('date occured', auto_now_add=True)
    change_date = models.DateTimeField('date changed', auto_now_add=True)

    def __unicode__(self):
        return self.title + " " + self.details




