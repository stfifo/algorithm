x = int(input())

lst= []

for _ in range(x):
    n, m = map(int, input().split())
    if n == m:
        lst.append(1)
    else:
        temp = m
        result = 1
        for _ in range(n):
            result *= temp
            temp -= 1
        temp = n
        for _ in range(n):
            result = result // temp
            temp -= 1
        lst.append(result)
print(*lst, sep='\n')    
