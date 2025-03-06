def is_prime(a, b):
    prime_list = []
    for i in range(a, b+1):
        if i < 2:
            continue
        for j in range(2, i):
            if i % j == 0:
                break
        else:
            prime_list.append(i)
    return prime_list 
    

    
a = int(input())
b = int(input())

result = is_prime(a,b)
prime_sum = 0
for p in result:
    prime_sum += p
    
if len(result) != 0:    
    print(prime_sum)
    print(min(result))

else:
    print("-1")



import math
import sys

def is_prime(n):
    if n == 1:
        return False
    for i in range(2, int(math.sqrt(n)+1)):
        if n % i == 0:
            return False
    return True

l = []
prime_list = []
cnt = 0
#in_val = 0
while True:
    try:
        in_val = int(input())
        if in_val == 0:
            break
        l.append(in_val)
    except valueError:
        print('e');
        
    
for n in l:
    for num in range(n, 2*n+1):
        if is_prime(num):
            cnt+=1
        
print(cnt)
