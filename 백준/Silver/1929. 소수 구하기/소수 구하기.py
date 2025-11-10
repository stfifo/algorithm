import sys

m, M = map(int, sys.stdin.readline().strip().split())

def prime(num):
    temp = 0
    if num == 1: return False
    if num == 2 and num == 3 : return True
    for i in range(2, int(num**0.5)+1):
        if num % i == 0:
            temp = 1
            break
    return True if temp == 0 else False

result = [str(i) for i in range(m, M+1) if prime(i)]
print('\n'.join(result))