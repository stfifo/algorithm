import sys

n = int(sys.stdin.readline())
nums = list(map(int, sys.stdin.readline().strip().split()))
m = int(sys.stdin.readline())
check = list(map(int, sys.stdin.readline().strip().split()))

# lst = [str(nums.count(i)) for i in check] : O(n*m)

dict = {}
for i in nums:
    dict[i] = dict.get(i, 0) + 1
lst = [str(dict.get(c, 0)) for c in check]

print(' '.join(lst))

