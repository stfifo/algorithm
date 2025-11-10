import math
import string

r = 31
M = 1234567891
letters = list(string.ascii_lowercase)

n = int(input())
s = list(input())
result = 0
for i in range(n):
    result += (letters.index(s[i])+1) * pow(r, i)

print(result % M)