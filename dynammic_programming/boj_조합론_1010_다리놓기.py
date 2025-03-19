import sys
#sys.recursionlimit(100000000)
# mCn m! / n! * (m-n)!
def fact(n):
    dp = [1] * (n+1)
    for i in range(2, n+1):
        dp[i] = dp[i-1] * i
    return dp
    
num = int(sys.stdin.readline())
max_value = 0 
quaries = []

for i in range(num):
    line = sys.stdin.readline().strip()
    if line:
        n, m = map(int, line.split())
        quaries.append((n,m))
        max_value = max(max_value, n, m)

factorial = fact(max_value)

for n, m in quaries:
    result = factorial[m] // (factorial[n] * factorial[m-n])
    print(result)
