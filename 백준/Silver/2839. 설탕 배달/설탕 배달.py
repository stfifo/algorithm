n = int(input())
bag = []

for i in range(n//5, 0, -1):
    if (n - 5*i) %3 == 0:
        bag.append(i + (n - i*5) // 3)
        break

if (n%5) %3 == 0:
    bag.append(n // 5 + (n%5)//3)
elif n%3 == 0:
    bag.append(n//3)
    
if len(bag) == 0:
    print(-1)
else: print(min(bag))