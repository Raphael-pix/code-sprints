
def angryProfessor(k, a):
    on_time_students = sum(1 for time in a if time <= 0)
    return "YES" if on_time_students < k else "NO"
