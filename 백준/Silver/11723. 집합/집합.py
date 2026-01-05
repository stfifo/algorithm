import sys
input = sys.stdin.readline

m = int(input())
S = set()

one_twenty = set(range(1, 21))
empty_set = set()

for _ in range(m):
    lst = list(input().split())
    if len(lst) > 1:
        opr, x = lst[0], int(lst[-1])
        if opr == 'add':
            S.add(x)
        elif opr == 'remove':
            S.discard(x)
        elif opr == 'check': 
            if x in S: print(1)
            else: print(0)
        elif opr == 'toggle':
            if x in S:
                S.remove(x)
            else:
                S.add(x)
    else:
        opr = lst[0]
        if opr == 'all':
            S = one_twenty.copy()
        else:
            S = set()