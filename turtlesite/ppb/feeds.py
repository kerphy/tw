import urllib2
from django.http import HttpRequest

def getHexunPrice(contract_name):
    s = urllib2.urlopen(
            "http://quote.futures.hexun.com/2010/JsData/FRunTimeQuote.aspx?code="
            +contract_name+"&market=2").read()
    print s

if __name__ == '__main__':
    getHexunPrice('m1305')
