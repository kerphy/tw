"""
This file demonstrates writing tests using the unittest module. These will pass
when you run "manage.py test".

Replace this with more appropriate tests for your application.
"""

from django.test import TestCase
from ppb.feeds import *

class HexunTest(TestCase):
    def test_basic_get_price(self):
        print getHexunPrice('m1305')

    def test_get_price(self):
        print getPrice('m1305')
