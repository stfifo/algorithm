n = int(input())
a = set(map(int, input().split()))

m = int(input())
b = list(map(int, input().split()))

result = [0 if i not in a else 1 for i in b]

print('\n'.join(map(str, result)))