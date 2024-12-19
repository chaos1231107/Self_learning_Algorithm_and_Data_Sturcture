def fib(n, memo):
    if n <= 1:
        return n

    if memo[n] != 0:
        return memo[n];
    
    memo[n] = fib(n-1, memo) + fib(n-2, memo)
    
    return memo[n];

n = int(input())
memo = [0] * (n+1)
print(fib(n, memo))
