import sys

N = int(sys.stdin.readline())
#rows = N 
#cols = N
up = []
down = []
cnt = 0

for i in range(N):
    up.append(i)
    down.append(i)
    
for i in range(N):
    for j in range(i+1, N):
        if up[i] != down[j]:
            cnt += 1
            
print(2*cnt)
