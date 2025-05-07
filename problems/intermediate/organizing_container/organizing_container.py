
def organizingContainers(container):
    n = len(container)
    row_sums = [sum(row) for row in container]
    col_sums = [sum(container[i][j] for i in range(n)) for j in range(n)]
    return "Possible" if sorted(row_sums) == sorted(col_sums) else "Impossible"
