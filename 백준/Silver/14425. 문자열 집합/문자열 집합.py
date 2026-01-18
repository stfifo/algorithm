n, m = map(int, input().split())

origin = set([input() for _ in range(n)])
count = 0
for _ in range(m):
    s = input()
    if s in origin:
        count += 1
print(count)