import sys

def find_comb(m):
    max_n = 1002
    dp = [[0 for _ in range(max_n)] for _ in range(max_n)]
    for i in range(max_n):
        dp[i][0] = 1 
    for i in range(max_n):
        dp[i][i] = 1 
        
    for i in range(1,max_n):
        for j in range(1,i):
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1]
            
    result = []
    
    for n in range(0, max_n):
        for r in range(0, max_n):
            if dp[n][r] == m:
                result.append((n,r))
    return result
    
m = int(sys.stdin.readline().strip())
pairs = find_comb(m)

for pair in pairs:
    print(pair[0], pair[1])
