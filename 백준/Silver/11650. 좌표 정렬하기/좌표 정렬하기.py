n = int(input())
coor = [list(map(int, input().split())) for _ in range(n)]

coor.sort(key=lambda x : (x[0], x[1]))

print('\n'.join(' '.join(map(str, x)) for x in coor))