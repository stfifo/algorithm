croatia = ['c=', 'c-', 'd-', 'lj', 'nj', 's=', 'z=']
word_input = input()
word = word_input[:]
count = 0
while (len(word) != 0):
    if word[0:3] == 'dz=':
        word = word[3:]
    elif word[0:2] in croatia:
        word = word[2:]
    else:
        word = word[1:]
    count += 1

print(count)