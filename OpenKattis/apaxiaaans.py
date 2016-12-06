import sys
from itertools import *

def RemoveDuplicates(arg):
    unique = (i[0] for i in groupby(arg))
    return ''.join(unique)

if __name__ == "__main__":
    input = raw_input();
    print RemoveDuplicates(input);
