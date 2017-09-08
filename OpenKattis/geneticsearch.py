class GeneticSearch:

    global type1
    global type2
    global type3

    def __init__(self, S, L):
        self.S = S
        self.L = L

    def CountType1(self):
        type1 = 0
        for i in range((len(self.L)-len(self.S))+1):
            temp = self.L[i:i+len(self.S)]
            if(self.S == temp):
                type1 += 1
        
        return type1

    def CountType2(self):
        type2 = 0
        l = self.unique_removed_strings(self.S)
        for i in range(len(l)):
            for j in range((len(self.L)-len(l[i]))+1):
                temp = self.L[j:j+len(l[i])]
                if(l[i] == temp):
                    type2 +=1

        return type2

    def CountType3(self):
        type3 = 0
        l = self.unique_added_strings(self.S)
        for i in range(len(l)):
            for j in range((len(self.L)-len(l[i]))+1):
                temp = self.L[j:j+len(l[i])]
                if(l[i] == temp):
                    type3 +=1

        return type3
        
    def remove_one_char(self, S, i):
        return S[:i] + S[i+1:]

    def unique_removed_strings(self, S):
        l = []
        for i in range(len(S)):
            l.append(self.remove_one_char(S, i))
        return list(set(l))

    def add_one_char(self, S, i, c):
        return S[:i] + c + S[i:]

    def unique_added_strings(self, S):
        chars = 'AGCT'
        l = []
        for c in chars:
            for i in range(len(S)+1):
                l.append(self.add_one_char(S,i,c))

        return list(set(l))


if __name__ == '__main__':
    sl = input()
    while(sl!='0'):
        S, L = sl.split()
        search = GeneticSearch(S,L)
        print(search.CountType1(), search.CountType2(), search.CountType3())
        sl = input()
        if(sl=='0'):
            break