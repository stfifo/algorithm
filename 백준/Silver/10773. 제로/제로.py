n = int(input())
lst = []
for _ in range(n):
    num = int(input())
    if num != 0:
        lst.append(num)
    else:
        lst.pop()

print(sum(lst))