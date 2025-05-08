def steadyGene(gene):
    n = len(gene)
    required = n // 4
    count = {c: 0 for c in 'ACGT'}
    for c in gene:
        count[c] += 1

    if all(count[c] == required for c in 'ACGT'):
        return 0

    min_len = n
    left = 0
    for right in range(n):
        count[gene[right]] -= 1
        while left < n and all(count[c] <= required for c in 'ACGT'):
            min_len = min(min_len, right - left + 1)
            count[gene[left]] += 1
            left += 1
    return min_len


#  Example usage
if __name__ == '__main__':
    gene = input("Enter the gene string: ").strip()
    print(steadyGene(gene))
