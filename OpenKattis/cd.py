# Author: Muhammad Fathir Irhas - 30/11/2016

import sys;

def GetResult(a,b):
    bothHave = 0;
    for i in range(0,len(a)):
        if a[i] in b:
            bothHave+=1;
    return bothHave;

if __name__ == "__main__":
	x, y = map(int, raw_input().split());
	a = [None]*x;
	b = [None]*y;
	for i in range(0,x):
		a[i] = raw_input();
	for j in range(0,y):
		b[j] = raw_input();
	stop1, stop2 = map(int, raw_input().split());
	if(stop1 == 0 and stop2 == 0):
		print GetResult(a, b);
