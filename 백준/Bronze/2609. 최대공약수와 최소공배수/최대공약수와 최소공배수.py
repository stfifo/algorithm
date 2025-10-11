x, y = map(int, input().split())
a = max(x, y)
b = min(x, y)
def gcd(x, y): # x > y
    r = x % y
    if r != 0:
        return gcd(y, r)
    else:
        return y

gcd = gcd(x, y)
print(gcd)
print((x * y) // gcd)
