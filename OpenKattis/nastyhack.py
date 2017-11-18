n = int(input())
for i in range(n):
    r,e,c = map(int, input().split())
    if((e-c) > r):
        print('advertise')
    elif((e-c) == r):
        print('does not matter')
    else:
        print('do not advertise')
