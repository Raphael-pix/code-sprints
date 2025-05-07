def morganAndString(a, b):
    result = []
    i, j = 0, 0
    while i < len(a) and j < len(b):
        if a[i:] <= b[j:]:
            result.append(a[i])
            i += 1
        else:
            result.append(b[j])
            j += 1
    result.append(a[i:])
    result.append(b[j:])
    return ''.join(result)
