import sys

def CheckOddities(m):
    for i in range(0,len(m)):
        if(m[i] % 2 == 0):
            print m[i],"is even";
        else:
            print m[i],"is odd";

if __name__ == "__main__":
    n = input();
    m = [0] * n;
    for i in range(0,n):
        m[i] = input();
    CheckOddities(m);
