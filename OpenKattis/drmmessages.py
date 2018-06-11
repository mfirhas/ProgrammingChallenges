# Author: Muhammad Fathir Irhas
# OpenKattis: DRM Messages
# 2018-06-11

lettermap = {
    'A': 0,
    'B': 1,
    'C': 2,
    'D': 3,
    'E': 4,
    'F': 5,
    'G': 6,
    'H': 7,
    'I': 8,
    'J': 9,
    'K': 10,
    'L': 11,
    'M': 12,
    'N': 13,
    'O': 14,
    'P': 15,
    'Q': 16,
    'R': 17,
    'S': 18,
    'T': 19,
    'U': 20,
    'V': 21,
    'W': 22,
    'X': 23,
    'Y': 24,
    'Z': 25,
}

def divide(message) :
    half = int(len(message) / 2)
    return message[:half], message[half:]

def sum(message) :
    sum = 0
    for i in message :
        sum += lettermap[i]
    return sum

def shift(m, n) :
    n2 = lettermap[m] + n
    realn2 = n2
    if realn2 < 26 :
        for k in lettermap :
            if lettermap[k] == n2 :
                return k
    elif realn2 >= 26 :
        while realn2 >= 26 :
            realn2 = realn2 - 26 
            if realn2 < 26:
                break
        for k in lettermap :
            if lettermap[k] == realn2 :
                return k

def rotate(message) :
    n = sum(message)
    rotatedMsg = ""
    for s in message :
        rotatedMsg += str(shift(s,n))
    return rotatedMsg
    
def merge(rotatedMsg1, rotatedMsg2) :
    mergedMsg = ""
    for i in range(0,len(rotatedMsg1)) :
        mergedMsg += str(shift(rotatedMsg1[i], lettermap[rotatedMsg2[i]]))
    return mergedMsg


if __name__ == "__main__":
    message = raw_input()
    m1, m2 = divide(message)
    rm1, rm2 = rotate(m1), rotate(m2)
    print(merge(rm1,rm2))