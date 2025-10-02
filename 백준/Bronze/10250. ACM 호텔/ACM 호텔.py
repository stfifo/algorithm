t = int(input())
for _ in range(t):
    h, w, n = map(int,input().split())
    height = n % h
    if height == 0:
        height = h
        room = n // h
    else: room = n // h + 1
    
    print(height * 100 + room)