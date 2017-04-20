def foo(a, b):
    return len(set(a) & set(b)) > 0

num = int(input())
for i in range(num):
    a = raw_input()
    b = raw_input()
    print 'YES' if foo(a,b)==True else 'NO'