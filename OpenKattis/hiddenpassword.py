# Author	: Muhammad Fathir Irhas
# Date		: 24-11-2016
# Source	: https://open.kattis.com/problems/hidden

#!/usr/bin/python
import sys
import itertools
	
def DetectMessage(a,b):
	s = "";
	for i in range(0,len(b)):
		if(a.find(b[i]) > -1 ):
			s += b[i];
	
	return s;
	
def CheckMessage(a,s):
	s2 = "";
	c = 0;
	for i in range(0, len(s)):
		if len(s2) == len(a):
			break;
		if(c == 3):
			break;
		if a[c] == s[i]:
			s2 += a[i];
			c+=1;
	
	return s2;
	
def TrimDuplicate(a,s):
	c = ''.join(ch for ch, _ in itertools.groupby(s));
	return c;
	
if __name__ == "__main__":
	a, b = raw_input().split();
	s = DetectMessage(a,b);
	s2 = CheckMessage(a,s);
	print(s);
	print(s2);
	
	