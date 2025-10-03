n = int(input())
now = list(map(int, input().split()))
result = [i / max(now) * 100 for i in now]
print(sum(result) / n)