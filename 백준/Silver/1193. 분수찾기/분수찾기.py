start, end, time = 0, 1, 1
n = int(input())
if n == 1: print('1/1')
else:
    while True:
        start = end
        time += 1
        end += time
        if start <= n <= end:
            break
        
    up, down = 0, 0
    if time % 2 == 1:
        down = n - start
        up = time + 1 - down
    else:
        up = n - start
        down = time + 1 - up
    print(up,'/',down, sep='')