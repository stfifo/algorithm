n, m = map(int, input().split())

board = [input() for _ in range(n)]

def checkBW(s1:str, s2:str, board:list):
    change = 0
    
    # s1 s2 s1 s2...
    for i in range(0, len(board), 2):
        for j in range(0, len(board[i]), 2):
            if board[i][j] != s1: change += 1
        for k in range(1, len(board[i]), 2):
            if board[i][k] != s2: change += 1
    
    #s2 s1 s2 s1 ...
    for i in range(1, len(board), 2):
        for j in range(0, len(board[i]), 2):
            if board[i][j] != s2: change += 1
        for k in range(1, len(board[i]), 2):
            if board[i][k] != s1: change += 1
            
    return change

minNum = [min(checkBW('B', 'W',[row[j:8+j] for row in board[i:8+i]]), 
              checkBW('W', 'B', [row[j:8+j] for row in board[i:8+i]]))
          for i in range(n - 7) for j in range(m - 7)]

print(min(minNum))