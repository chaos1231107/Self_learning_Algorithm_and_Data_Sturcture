import math

def is_prime(n):
    if n == 1:
        return False
    for i in range(2,int(math.sqrt(n))+1):
        if n % i == 0:
            return False
    return True
    
testcase = int(input())
for _ in range(testcase):
    num = int(input())
    n1 = num // 2
    n2 = num // 2 
    for _ in range(num//2):
        if is_prime(n1) and is_prime(n2):
            print(n1,n2)
            break
        else:
            n1 -= 1 
            n2 += 1 
            
