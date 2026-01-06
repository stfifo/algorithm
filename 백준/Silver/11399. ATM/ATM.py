n = int(input())
time = list(map(int, input().split()))
time.sort()

prefix = []

for i in time:
    if not prefix:
        prefix.append(i)
    else:
        prefix.append(i+prefix[-1])
print(sum(prefix))