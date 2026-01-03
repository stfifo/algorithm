import sys
input = sys.stdin.readline
n, m = map(int, input().strip().split())
arr = list(map(int, input().strip().split()))
lst = [list(map(int, input().split())) for _ in range(m)]

prefix_sum = [0]
for i in arr:
    prefix_sum.append(prefix_sum[-1] + i)

for i, j in lst:
    print(prefix_sum[j] - prefix_sum[i-1])