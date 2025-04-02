x = int(input())
y = int(input())
prime = []

def prime_search(x):
    k = 0
    if x < 2:
        return
    for i in range(2,x):
        if x % i == 0:
            k = 1
    if k == 0:
        return prime.append(x)
        
for i in range(x, y+1):
    prime_search(i)
if len(prime) == 0:
    print(-1)
else:
    print(sum(prime))
    print(min(prime))