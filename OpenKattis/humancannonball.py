import math

n = input()
for i in range(0,n):
    v,a,d,lower,upper = raw_input().split()
    v = float(v) 
    a = math.radians(float(a)) 
    d = float(d) 
    lower = float(lower) 
    upper = float(upper) 
    time = d / (v* math.cos(a))
    height = (v * time * math.sin(a)) - (0.5 * 9.81 * math.pow(time,2))
    print "Safe" if (height > (lower + 1) and height < (upper - 1)) else  "Not Safe"
