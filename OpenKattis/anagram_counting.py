import sys
from itertools import permutations

def Anagram_Count(st):
    anagram_length = [];
    for i in range(0,len(st)):
        anagram = [''.join(p) for p in permutations(st)];
        anagram_length[i] = len(anagram);

    return anagram_length; #return array of number of anagram

if __name__ == "__main__":
    # input_str = sys.stdin.read();
    # print len(input_str);
    # print Anagram_Count(input_str);

    anagram_length = [];
    input_str = "";
    for line in sys.stdin:
        input_str = raw_input();

    anagram_counting = Anagram_Count(input_str);
    print anagram_counting;
