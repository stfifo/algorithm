num_pc = int(input())
connect = int(input())

def init(n):
    parent = [i for i in range(num_pc+1)]
    return parent

def find(parent, x):
    if parent[x] != x:
        parent[x] = find(parent, parent[x])
    return parent[x]

def union(parent, x, y):
    root_x = find(parent, x)
    root_y = find(parent, y)
    
    if root_x != root_y:
        if root_x < root_y:
            parent[root_y] = root_x
        else:
            parent[root_x] = root_y

parent = init(num_pc)
for _ in range(connect):
    x, y = map(int, input().split())
    union(parent, x, y)
root_1 = find(parent, 1)

count = 0
for i in range(2, num_pc+1):
    if find(parent, i) == root_1: count += 1
print(count)