#!/usr/bin/env python
# -*- coding: utf-8 -*-

import urllib2
import re
#from ppb.models import Price

def getHttpRspString(contract_name):
    s = urllib2.urlopen(
            "http://quote.futures.hexun.com/2010/JsData/FRunTimeQuote.aspx?code="
            +contract_name+"&market=2").read()
    return s


def getHexunFuturesPrice(contract_name):
    'Get Future Contract contract_name Price from Hexun'
    s = getHttpRspString(contract_name)

    # fetch result is
	# var dataArr=['m1305', '¶¹ÆÉ1305', 2, 3573, 3639, -56,'-1.54%', 3621, 3678, 3571, 1168496, 741750,-53606, 557445, 611051, 3615, 3629,3774.16, 3483.84, 3615]; FRunTimeQuote.GetData(dataArr)
	#               0        1      2      3     4    5     6        7      8     9     10
	#              code     name  market  last  lc   chg   chg %    open  high  low    volumn                               settle last.s  high_stop low_stop
    a = s[ s.index('[')+1 : s.index(']') ].split(',')
    price = {}
    price['code'] = a[0].replace("'", '')
    price['last'] = a[3].strip()
    price['last_close'] = a[4].strip()
    price['change'] = a[5].strip()
    price['change_pct'] = a[6].strip().replace("%", '').replace("'", '')
    price['open'] = a[7].strip()
    price['high'] = a[8].strip()
    price['low'] = a[9].strip()
    price['volumn'] = a[10].strip()

    return price


def getPrice(contract_name):

    s = getHttpRspString(contract_name)
    s1 = s[ s.index('[')+1 : s.index(']') ]
    a = re.split('[, ]+', s1)
    
    price = {}
    price['code'] = a[0]
    price['last'] = a[3]
    price['last_close'] = a[4]
    price['change'] = a[5]
    price['change_pct'] = a[6]
    price['open'] = a[7]
    price['high'] = a[8]
    price['low'] = a[9]
    price['volumn'] = a[10].strip()

    return price

if __name__ == '__main__':
    print getHexunFuturesPrice('m1305')
    print getPrice('m1305')
