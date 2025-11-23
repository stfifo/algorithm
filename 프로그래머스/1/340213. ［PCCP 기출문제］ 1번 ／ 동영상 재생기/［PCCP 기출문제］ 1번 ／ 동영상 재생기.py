def solution(video_len, pos, op_start, op_end, commands):
    answer = ''
    def str2ms(s):
        x, y = map(int, s.split(':'))
        return x*60+y
    video_len_s = str2ms(video_len)
    pos_s = str2ms(pos)
    op_start_s = str2ms(op_start)
    op_end_s = str2ms(op_end)
    point = pos_s
    for c in commands:
        if op_start_s <= point <= op_end_s: point = op_end_s
        if c == "prev":
            point = 0 if point < 10 else point - 10
            if op_start_s <= point <= op_end_s: point = op_end_s
        elif c == "next":
            point = video_len_s if video_len_s - point < 10 else point + 10
            if op_start_s <= point <= op_end_s: point = op_end_s
    
    minute = point // 60
    second = point % 60
    min_str, sec_str = '', ''
    min_str = '0'+str(minute) if minute < 10 else str(minute)
    sec_str = '0'+str(second) if second < 10 else str(second)
    
    answer = min_str+':'+sec_str
    
    
    return answer