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

