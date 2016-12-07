import sys
import itertools

def RemoveDuplicate(s):
	uniqs = '';
	for x in s:
		if not(x in uniqs):
			uniqs = uniqs + x;
			
	return uniqs;
	
print(RemoveDuplicate('HAPPYBIRTHDAYCACEY'));

# print(''.join(set('aaabcabccd')))

# print(''.join(ch for ch, _ in itertools.groupby('HAPPYBIRTHDAYCACEY')));