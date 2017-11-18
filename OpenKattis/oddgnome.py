def get_list(s):
    arr = s.split(" ")
    int_arr = list(map(int, arr))
    int_arr.pop(0)
    return int_arr

def find_king(s):
    i = 1
    l = get_list(s)
    while(True):
        if((l[i] > (l[i-1]+1)) or (l[i]<l[i-1])):
            return i+1
        i+=1

n = int(input())

for i in range(n):
    s = input()
    print(find_king(s))