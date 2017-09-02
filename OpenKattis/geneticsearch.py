

class GeneticSearch:

    global type1
    global type2
    global type3

    def __init__(self, S, L):
        self.S = S
        self.L = L

    def CountType1(self):
        type1 = 0
        for i in range((len(L)-len(S))+1):
            temp = L[i:i+len(S)]
            if(S == temp):
                type1 += 1
        
        return type1

    def CountType2(self):
        type2 = 0
        


if __name__ == '__main__':
    sl = input()
    while(sl!='0'):
        S, L = sl.split()
        search = GeneticSearch(S,L)
        print(search.CountType1())
        sl = input()
        if(sl=='0'):
            break
    

        