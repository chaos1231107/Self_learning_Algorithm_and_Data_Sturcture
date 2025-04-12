import sys

x, y, c = map(int, sys.stdin.readline().split())
high = min(x, y)
low = 1 
res = 0

while low +0.001 <= high:
    mid = (low+high) / 2
    h1 = (x**2 - mid**2) ** 0.5
    h2 = (y**2 - mid**2) ** 0.5
    predict = (h1*h2) / (h1+h2)
    
    if predict >= c:
        res = mid
        low = mid
    else:
        high = mid
print(res)
