import sys
n, k = map(int, sys.stdin.readline().strip().split())

num = list(range(1, n+1))
idx = 0
result = []

while (len(num) != 1):
    idx = (idx + k-1) % len(num)
    result.append(num.pop(idx))
result.append(num.pop(0))

print(f"<{', '.join(map(str, result))}>")