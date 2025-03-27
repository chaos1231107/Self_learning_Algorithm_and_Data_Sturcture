import sys

def gcd(a, b):
    while (b != 0):
        temp = a % b 
        a = b 
        b = temp
    return a
    
a, b = map(int, sys.stdin.readline().split())
g = gcd(a, b)

print('1'*g)
