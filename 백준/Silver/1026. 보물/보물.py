n = int(input())
x = sorted(list(map(int, input().split())))
y = sorted(list(map(int, input().split())), reverse=True)

print(sum(x*y for x,y in zip(x, y)))