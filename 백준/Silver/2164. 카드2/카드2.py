from collections import deque
import sys



n = int(sys.stdin.readline().strip())

q = deque(range(1, n+1))

while len(q) > 1:
    
    q.popleft()
    q.append(q[0])
    q.popleft()
    
print(q[0])