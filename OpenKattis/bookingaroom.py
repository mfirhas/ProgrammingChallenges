#!/usr/bin/python
import random

r,n = map(int, raw_input().split())

list_r = []
for i in range(r):
    list_r.append(i+1)

list_n = []
for i in range(n):
    m = input()
    list_n.append(m)

if(r==n):
    print "too late"
else:
    avail_rooms = list(set(list_r) - set(list_n))
    print random.choice(avail_rooms)

