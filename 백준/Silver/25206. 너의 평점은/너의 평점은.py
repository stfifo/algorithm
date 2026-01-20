result = [0] * 9
total_grade = 0.0
for _ in range(20):
    subject, each, grade = input().split()
    each= float(each)
    if grade[0] == 'A':
        if grade[-1] == '+': result[0] += each
        else: result[1] += each
    elif grade[0] == 'B':
        if grade[-1] == '+': result[2] += each
        else: result[3] += each
    elif grade[0] == 'C':
        if grade[-1] == '+': result[4] += each
        else: result[5] += each
    elif grade[0] == 'D':
        if grade[-1] == '+': result[6] += each
        else: result[7] += each
    elif grade[0] == 'F':
        result[8] += each
total_grade = sum(result[i]*(4.5 - i * 0.5) for i in range(8))
total_each = sum(result)
print(total_grade / total_each)