import sys
from collections import Counter

def TheWinner(s):
	b = Counter(s);
	c = b.most_common();
	return b.values;

if __name__ == "__main__":
	list = [];

	while True:
		input = raw_input();
		if input == "***":
			break;
		list.append(input);


	print TheWinner(list);
