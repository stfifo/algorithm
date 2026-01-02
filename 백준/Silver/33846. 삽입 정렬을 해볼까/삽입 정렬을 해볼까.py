import sys
len_array, idx = map(int, sys.stdin.readline().strip().split())
arr = list(map(int, sys.stdin.readline().strip().split()))
lst = sorted(arr[:idx]) + arr[idx:]
print(*lst)