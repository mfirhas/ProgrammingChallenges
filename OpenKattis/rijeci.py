num = input()
a=1
b=0
for i in range(num):
    temp = a
    a=b
    b += temp

print a,b
