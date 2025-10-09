n, r = map(int, input().split())
nF = 1
rF = 1
n_rF = 1
for i in range(2, n+1):
    nF *= i

for i in range(2, r+1):
    rF *= i

for i in range(2, n - r + 1):
    n_rF *= i

print(nF // (rF * n_rF))
