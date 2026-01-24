import sys
input = sys.stdin.readline
n = int(input().strip())
n_lst = [int(input().strip()) for _ in range(n)]
n_lst.sort()
print(*n_lst, sep='\n')