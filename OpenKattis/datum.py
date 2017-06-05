from math import floor

# Author: M. Fathir Irhas - 5/6/2017 - OpenKattis
# Using Gauss's Algorithm

d, m = map(int, input().split())

days = {0:"Sunday", 1:"Monday", 2:"Tuesday", 3:"Wednesday", 4:"Thursday", 5:"Friday", 6:"Saturday"}

# Months shifting
m_ = {3:1, 4:2, 5:3, 6:4, 7:5, 8:6, 9:7, 10:8, 11:9, 12:10, 1:11, 2:12}
c = 20
y = 8 if m==1 or m==2 else 9

day = (d + floor((2.6*m_[m])-0.2) - (2*c) + y + floor(y/4) + floor(c/4)) % 7
if day < 0:
    day = day + 7
print(days[day])