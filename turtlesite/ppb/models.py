from django.db import models

# ppb stands for price, position and break

class Price(models.Model):
    contract_name = models.CharField(max_length=32)
    last = models.FloatField(null=True, blank=True)
    open = models.FloatField(null=True, blank=True)
    high = models.FloatField(null=True, blank=True)
    low  = models.FloatField(null=True, blank=True)
    last_close = models.FloatField(null=True, blank=True)
    change = models.FloatField(null=True, blank=True)
    percent_chg = models.FloatField(null=True, blank=True)
    volumn = models.IntegerField(null=True, blank=True)
    date = models.CharField(max_length=10, null=True, blank=True)

    def __unicode__(self):
        return self.contract_name

class Position(models.Model):
    contract_name = models.CharField(max_length=32)
    unit = models.IntegerField(null=True, blank=True)
    size = models.IntegerField(null=True, blank=True)
    direction = models.CharField(max_length=1, null=True, blank=True)
    next = models.FloatField(null=True, blank=True)
    stop = models.FloatField(null=True, blank=True)
    last_entry = models.FloatField(null=True, blank=True)
    cost = models.FloatField(null=True, blank=True)
    today_profit = models.FloatField(null=True, blank=True)

    def __unicode__(self):
        return self.contract_name
