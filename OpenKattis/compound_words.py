from sys import stdin

def Permute(l):
    permuted = []
    for i in range(len(l)):
        d = l
        x = del d[i]
        for j in range(len(x)):
            permuted.append(l[i]+x[j])
    list(set(permuted))
    sorted(permuted)
    return permuted

l = []
while True:
    try:
        x = input()
        y = x.split()
        for i in range(len(y)):
            l.append(y[i])
    except(EOFError):
        print(Permute(l))
        break