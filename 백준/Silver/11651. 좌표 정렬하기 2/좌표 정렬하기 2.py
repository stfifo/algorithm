n = int(input())

coor = [list(map(int, input().split())) for _ in range(n)]

coor_sorted = sorted(coor, key=lambda x: (x[1], x[0]))
for s in coor_sorted:
    print(s[0], s[1])