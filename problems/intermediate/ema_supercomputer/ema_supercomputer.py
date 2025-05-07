
def twoPluses(grid):
    n, m = len(grid), len(grid[0])
    pluses = []

    # Function to get maximum arm length at (i, j)
    def max_arm(i, j):
        length = 0
        while (
            i - length >= 0 and i + length < n and
            j - length >= 0 and j + length < m and
            grid[i - length][j] == 'G' and
            grid[i + length][j] == 'G' and
            grid[i][j - length] == 'G' and
            grid[i][j + length] == 'G'
        ):
            pluses.append(set([
                (i + d, j) for d in range(-length, length + 1)
            ] + [
                (i, j + d) for d in range(-length, length + 1)
            ]))
            length += 1

    # Find all possible pluses
    for i in range(n):
        for j in range(m):
            if grid[i][j] == 'G':
                max_arm(i, j)

    max_product = 0
    for i in range(len(pluses)):
        for j in range(i + 1, len(pluses)):
            if pluses[i].isdisjoint(pluses[j]):
                max_product = max(max_product, len(pluses[i]) * len(pluses[j]))

    return max_product
