# Author: Muhammad Fathir Irhas - SimonSays OpenKattis


def SimonSays(s):
	if(s[0:10] == "simon says"):
		return s[11:]
	else:
		return ""

if __name__ == "__main__":
	num = input()
	for i in range(0,num):
		s = raw_input()
		print SimonSays(s)


