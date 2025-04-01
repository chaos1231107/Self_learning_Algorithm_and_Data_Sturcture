N = int(input())
MOD = 1000000000
dp = [[0]*10 for _ in range(N+1)]
for i in range(1, 9+1):
    dp[1][i] = 1 
    dp[1][i] %= MOD

for i in range(2, N+1):
    for j in range(10):
        if j == 0:
            dp[i][j] = dp[i-1][1] % MOD
        elif j == 9:
             dp[i][j] = dp[i-1][8] % MOD
        else:
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % MOD
        
result = sum(dp[N]) % MOD
print(result)
            
