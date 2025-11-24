def solution(diffs, times, limit):
    en = max(diffs)
    st = 1
    mid = (st+en)//2
    level = mid
    level_lst = []
    while(st<=en):
        total = 0
        for i in range(len(diffs)):
            if diffs[i] > level:
                wrong = times[i-1] + times[i]
                total += wrong * (diffs[i]-level) + times[i]
            else:
                total += times[i]
        if total > limit:
            st = mid + 1
            mid = (st+en)//2
            level = mid
        else:
            level_lst.append(level)
            en = mid - 1
            mid = (st+en)//2
            level = mid

    return min(level_lst)
    