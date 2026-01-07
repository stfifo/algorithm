import sys
input = sys.stdin.readline

site_num, search_pass = map(int, input().split())
info = {}

for _ in range(site_num):
    address, password = input().split()
    info[address] = password

lst = []
for _ in range(search_pass):
    lst.append(info.get(input().strip()))

# print(*lst, sep='\n')
print('\n'.join(lst))