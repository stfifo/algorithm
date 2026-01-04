import sys
input = sys.stdin.readline
n, m = map(int, input().strip().split())
not_hear = [input().strip() for _ in range(n)]
not_see = [input().strip() for _ in range(m)]

result = list(set(not_hear) & set(not_see))
result.sort()
print(len(result))
print(*result, sep='\n')