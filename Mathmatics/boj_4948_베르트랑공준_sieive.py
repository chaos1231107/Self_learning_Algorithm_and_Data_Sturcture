def seive(limit):
    prime = [True] * (limit+1)
    prime[0] = prime[1] = False
    for i in range(2,int(limit**0.5)+1):
        if prime[i]:
            for j in range(i*i, limit+1, i):
                prime[j] = False
    return prime
    
max_limit = 123456 * 2
is_prime = seive(max_limit)

while True:
    n = int(input())
    if n == 0:
        break
    cnt = 0
    
    for p in range(n+1, 2*n+1):
        if is_prime[p]:
            cnt+=1 
            
    print(cnt)
