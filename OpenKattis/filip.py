from math import log10

def reverse(num):
    if num < 10:
        return num
    else:
        ones = num % 10
        rest = num // 10
        return ones * 10 ** int(log10(rest) + 1) + reverse(rest)

a,b = map(int, input().split())
print(reverse(a)) if reverse(a) > reverse(b) else print(reverse(b))
