d = map(int, ''.join(line.rstrip() for line in open('pe8.txt')))
mul = lambda x,y: x*y

L = 13
print 'Greatest product of', L, 'consecutive \ndigits =', 
print "None."  if L>len(d) else  \
            max(reduce(mul, d[i:i+L]) for i in xrange(len(d)-L+1))