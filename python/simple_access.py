#!/usr/bin/env python

account_list = [
        ['bjiang', '1234'],
        ['ios', '5678'],
        ['god', 'dog'],
        ['free', 'man'],
        ]
name = raw_input('Name: ')
password = raw_input('Password: ')

if [name, password] in account_list:
    print "Access granted!"
else:
    print "Access denied!"
