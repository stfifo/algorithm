n = int(input())

def facto(n):  
    return n * facto(n-1) if n>1 else 1

count = 0

str_n = str(facto(n))
str_n = str_n[::-1]
for s in str_n:
    if s == '0':
        count += 1
    else:
        break;
print(count)