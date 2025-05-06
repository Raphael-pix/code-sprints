
def gradingStudents(grades):
    result = []
    for grade in grades:
        if grade < 38:
            result.append(grade)
        else:
            next_multiple_of_5 = ((grade // 5) + 1) * 5
            if next_multiple_of_5 - grade < 3:
                result.append(next_multiple_of_5)
            else:
                result.append(grade)
    return result
