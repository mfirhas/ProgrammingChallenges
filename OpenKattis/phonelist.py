import sys;

def CheckConsistency(s):
    c = 0;
    d = [None]*len(s);
    consistency = "YES";
    for i in range(0,len(s)):
        nn = 0;
        for j in range(0, len(s[i])-1):
            for k in range(1, len(s[i])-1):
                if s[i][j] in s[i][k+nn]:
                    consistency = "NO";
            nn =+ 1;
        d[i] = consistency;
        consistency = "YES";
    return d;


if __name__ == "__main__":
    num = input();
    a = [];
    c = [];
    for i in range(0,num):
        _num_ = input();
        a = [None]*_num_;
        for j in range(0,_num_):
            a[j] = raw_input();
        c.append(a);

    print CheckConsistency(c);
