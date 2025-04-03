import sys
a, b, c, m = map(int, sys.stdin.readline().split())
tired = 0
work = 0
for _ in range(24):
    if tired + a <= m:
        tired += a
        work += b
    else:
        if tired > m:
            work = 0
            break
        else:
            tired -= c
            if tired < 0:
                tired = 0
print(work)