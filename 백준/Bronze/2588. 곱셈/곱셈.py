n = int(input())
m = int(input())

ans3 = n * (m%10)
ans4 = n * ((m%100)//10)
ans5 = n * (m//100)

ans = n*m
print(ans3)
print(ans4)
print(ans5)
print(ans)