
def buildString(a, b, s):
    n = len(s)
    dp = [0] * (n + 1)  # dp[i]: min cost to build s[0:i]
    
    for i in range(1, n + 1):
        # Option 1: add next character
        dp[i] = dp[i - 1] + a

        # Option 2: try to find a substring to copy
        for j in range(i // 2):
            length = i - j
            if s[j:j+length] == s[i-length:i]:
                dp[i] = min(dp[i], dp[i-length] + b)
                break  # take the first match (longest possible)

    return dp[n]
