import sys;
from collections import Counter;

def GetResult(a):
    b = Counter(a);
    return len(b.keys());

if __name__=="__main__":
    num = int(raw_input()); #input number of test case
    result = [];
    for i in range(0,num):
        case_num = int(raw_input());
        arr = [];
        for j in range(0,case_num):
            arr.append(raw_input());
        result.append(GetResult(arr));

    for k in range(0,len(result)):
        print result[k];
