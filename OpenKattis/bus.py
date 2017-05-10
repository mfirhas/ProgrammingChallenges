n = int(input())
for i in range(n):
    p = int(input())
    p_num = 0
    while p>0:
        p_num += 0.5
        p_num *= 2
        p -= 1
    print(int(p_num))

