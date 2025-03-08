import sys
input = sys.stdin.readline

def prime_check(x):
    for i in range(2, int(x**0.5)+1):
        if x % i == 0:
            return False
    return True

T = int(input())
for i in range(T):
    num = int(input())
    
    if num == 0 or num == 1:
        print(2)
        
    else:
        while not prime_check(num):
            num+=1 
        print(num)
