n, m = map(int, input().split())
all = []
each = []
for i in range(m):
    x, y = map(int, input().split())
    all.append(x)
    each.append(y)
a = min(all)
e = min(each)
if n >= 6:
    q = n // 6
    r = n % 6
    print(min(a * (q+1), a * q + e * r, e * n))
else:
    print(min(a, e * n))