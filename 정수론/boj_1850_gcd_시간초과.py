import sys

def gcd(a, b):
    while (b != 0):
        temp = a % b 
        a = b 
        b = temp
    return a
    
a, b = map(int, sys.stdin.readline().split())
con_a = 0 
con_b = 0
for i in range(0, a):
    con_a += (10 ** i)
# 111 = 100 + 10 + 1 = pow(10,2) + pow(10,1) + pow(10,0)
for i in range(0, b):
    con_b += (10 ** i)
    
result = gcd(con_a, con_b)
print(result)
