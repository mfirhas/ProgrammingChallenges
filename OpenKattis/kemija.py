#author: Muhammad Fathir Irhas - 12/07/2016

import sys;

def ChangeSubstrings(s):
	_s = s.replace("apa","a");
	__s = _s.replace("ipi","i");
	___s = __s.replace("upu","u");
	____s = ___s.replace("epe","e");
	_____s = ____s.replace("opo","o");
	return _____s;

if __name__ == "__main__":
	s = raw_input();
	print ChangeSubstrings(s);
