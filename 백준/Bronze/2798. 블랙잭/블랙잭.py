import sys

n , M = map(int, sys.stdin.readline().strip().split())
nums = list(map(int, sys.stdin.readline().strip().split()))
sum_lst = [nums[i]+nums[j]+nums[k] for i in range(n) 
           for j in range(i+1, n)
           for k in range(j+1, n) if nums[i]+nums[j]+nums[k] <= M]

print(min(sum_lst, key=lambda x: abs(x-M)))