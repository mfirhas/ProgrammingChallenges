n = input()
names = []
for i in range(n):
    name = raw_input()
    names.append(name)
if(all(names[i] <= names[i+1] for i in xrange(len(names)-1))):
    print("INCREASING")
elif(all(names[i] >= names[i+1] for i in xrange(len(names)-1))):
    print("DECREASING")
else:
    print("NEITHER")