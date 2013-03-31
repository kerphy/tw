from django.db import models

# ppb stands for price, position and break

class Price(models.Model):
    contract_name = models.CharField(max_length=32)
    last = models.FloatField

class Position(models.Model):
    contract_name = models.CharField(max_length=32)
    
