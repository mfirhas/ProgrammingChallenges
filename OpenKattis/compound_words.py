from sys import stdin

# author: Muhammad Fathir Irhas - 12/05/2017 - OpenKattis

def Permute(l):
    permuted = []
    for i in range(len(l)):
        d = l[:]
        del d[i]
        for j in range(len(d)):
            permuted.append(l[i]+d[j])
    permuted = list(set(permuted))
    permuted = sorted(permuted, key=str.lower)
    return permuted

l = []
while True:
    try:
        x = input()
        y = x.split()
        for i in range(len(y)):
            l.append(y[i])
    except(EOFError):
        p = Permute(l)
        for i in range(len(p)):
            print(p[i])
        break