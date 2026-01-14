n = input()
n_lst = list(map(int, list(n)))
n_lst.sort(reverse=True)
if n_lst[-1] == 0 and sum(n_lst)%3 == 0:
    result = ''
    for num in n_lst:
        result += str(num)
    print(result)
else:
    print(-1)
