import math

a = int(input())
b = int(input())
l = []

min_val = math.inf
for i in range(a, b+1):
    if (i ** 0.5) % 1 == 0:
        l.append(i)
s = 0
for e in l:
    s += e
    
for j in l:
    if j < min_val:
        min_val = j
        
if len(l) == 0:
    print("-1")
    
else:
    print(s)
    print(min_val)
