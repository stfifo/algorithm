#11047
n, k = map(int, input().split())
coin = [int(input()) for _ in range(n)]
count = 0

price = k

for i in range(n-1, -1, -1):
    if coin[i] > price:
        pass
    else:
        max_coin_count = price // coin[i]
        count += max_coin_count
        price -= (max_coin_count * coin[i])
    
print(count)