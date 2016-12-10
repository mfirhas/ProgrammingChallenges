import sys;

def Sum_Digits(N,m):
	sN = 0;
	sNm = 0;
	Nm = N * m;

	while N:
		sN += N % 10;
		N //= 10;

	while Nm:
		sNm += Nm % 10;
		Nm //= 10;

	if(sN==sNm):
		return True;
	else:
		return False;

def Search_m(N):
	m = 11;
	while(Sum_Digits(N,m) == False):
		if(Sum_Digits(N,m) == True):
			break;
		m+=1;
	return m;

if __name__ == "__main__":
	N = [];
	while True:
		n = input();
		if(n==0):
			break;
		N.append(n);

	for i in range(0,len(N)):
		print Search_m(N[i]);
