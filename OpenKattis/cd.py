# Author: Muhammad Fathir Irhas - 30/11/2016 - OpenKattis

mm = 1000000
n_list = []
m_list = []

while(True):
    n,m = map(int, raw_input().split())

    if(n == 0 and m == 0):
        break

    for i in range(0,n):
        n_input = input()
        n_list.append(n_input)

    for j in range(0,m):
        m_input = input()
        m_list.append(m_input)

    sold = 0
    ni = 0
    mi = 0
    while ni < n and mi < m:
        if(n_list[ni] > m_list[mi]):
            mi+=1
        elif(n_list[ni] < m_list[mi]):
            ni+=1
        else:
            sold+=1
            ni+=1
            mi+=1
    
    print sold

