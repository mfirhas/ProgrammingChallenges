import sys;
from collections import Counter;

def all_same(items):
	return all(x == items[0] for x in items)

def CalculatePoints(x):
	poits = 0;
	l = list(x);
	c = Couter(l);
	val = c.values();
	for i in range(0,len(val)):
		poits += pow(val[i],2);

	if('T' and 'C' and 'G' in x):
		poits += 7;

	if(all_same(val) and len(val)>1):
		poits += (7*val[0]);
		poits -= 7;

	return poits;

def CalculatePoints2(x):
	points = 0;
	t = 0;
	c = 0;
	g = 0;
	for i in range(0,len(x)):
		if(x[i] == 'T'):
			t+=1;
		elif(x[i] == 'C'):
			c+=1;
		elif(x[i] == 'G'):
			g+=1;

	points += ((t*t)+(c*c)+(g*g));
	points += (min(g,min(t,c)))*7;
	return points;


if __name__ == "__main__":
	x = raw_input();
	print CalculatePoints2(x);
