import sys

dp = [0] * 100001
N = int(sys.stdin.readline())
# dp[1] = 1
# dp[2] = 2
# dp[3] = 3
# dp[4] = min(4, 2, 1) = 1
# dp[5] = min(5, 2) = 2
# dp[6] = min(6, 2) = 2
# dp[7] = min(7, 4) = 4
# dp[8] = min(8, 2) = 2
# dp[9] = min(9, 1) = 1 dp[1] = dp[4] = dp[9] = dp[16] = 1
for i in range(1, N+1):
    dp[i] = i 
    for j in range(1, i+1):
        if j * j > i:
            break
        dp[i] = min(dp[i], dp[i-j*j]+1)
        
print(dp[N])
        
