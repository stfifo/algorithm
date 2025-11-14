n, m = map(int, input().split())

board = [input() for _ in range(n)]

def checkboard(board:list):
    c1, c2 = 0, 0
    
    #start: black
    # BWBW...
    for i in range(0, len(board), 2):
        for j in range(0, len(board[i]), 2):
            if board[i][j] != 'B': c1 += 1
        for k in range(1, len(board[i]), 2):
            if board[i][k] != 'W': c1 += 1

    # WBWB... 판별
    for i in range(1, len(board), 2):
        for j in range(0, len(board[i]), 2):
            if board[i][j] != 'W': c1 += 1
        for k in range(1, len(board[i]), 2):
            if board[i][k] != 'B': c1 += 1
            

    #start : white
    
    # WBWB... 판별
    for i in range(0, len(board), 2):
        for j in range(0, len(board[i]), 2):
            if board[i][j] != 'W': c2 += 1
        for k in range(1, len(board[i]), 2):
            if board[i][k] != 'B': c2 += 1

    # BWBW...
    for i in range(1, len(board), 2):
        for j in range(0, len(board[i]), 2):
            if board[i][j] != 'B': c2 += 1
        for k in range(1, len(board[i]), 2):
            if board[i][k] != 'W': c2 += 1
            
    return min(c1, c2)

minNum = []
for i in range(n - 7):
    for j in range(m - 7):
        temp = [row[j:8+j] for row in board[i:8+i]]
        minNum.append(checkboard(temp))

print(min(minNum))