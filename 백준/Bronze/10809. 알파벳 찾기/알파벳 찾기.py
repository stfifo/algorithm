S = input()
letters = [chr(i) for i in range(ord('a'), ord('z')+1)]
result = [S.find(s) for s in letters]
print(*result)