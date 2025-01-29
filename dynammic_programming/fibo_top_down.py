import sys
sys.setrecursionlimit(10000)
input = sys.stdin.readline

n = int(input())
d = [0] * (n+1)

def fibo(x):
    if x == 0:
        return 0;
    elif x == 1 or x == 2:
        d[x] = 1
        return d[x]
    elif d[x] != 0:
        return d[x]
    else:
        d[x] = fibo(x-2) + fibo(x-1)
        return d[x]

print(fibo(n))
