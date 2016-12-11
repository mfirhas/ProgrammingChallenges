import sys;

def SimonSays(s):
	if("Simon says " in s):
		print s[11:];

if __name__ == "__main__":
	input_s = [];
	num = input(); 
	for i in range(0,num):
		s = raw_input();
		input_s.append(s);

	for j in range(0,len(input_s)):
		SimonSays(input_s[j]);
