from collections import deque

n, k = map(int, input().split())
table = deque(range(1, n+1))
result = []

while table:
    for _ in range(k - 1):
        table.append(table.popleft())
    result.append(table.popleft())

print(str(result).replace('[', '<').replace(']', '>'))