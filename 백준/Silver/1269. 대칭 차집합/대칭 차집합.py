import sys
input = sys.stdin.readline

a_len, b_len = map(int, input().strip().split())
a = set(map(int, input().strip().split()))
b = set(map(int, input().strip().split()))

print(len(a | b) - len(a & b))