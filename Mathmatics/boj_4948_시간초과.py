import math

def is_prime(n):
    if n == 1:
        return False
    for i in range(2, int(math.sqrt(n)+1)):
        if n % i == 0:
            return False
    return True
l = []

while True:
    n = int(input())
    l.append(n)
    if n == 0:
        break
    #cnt = 0
    for n in l:
        cnt = 0
        for num in range(n+1, 2*n+1):
            if is_prime(num):
                cnt+=1
    
    
    print(cnt)
