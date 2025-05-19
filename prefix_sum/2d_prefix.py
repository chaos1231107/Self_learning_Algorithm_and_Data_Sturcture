import sys

N, M = map(int, sys.stdin.readline().split())
data = []
for _ in range(N):
    data.append(list(map(int, sys.stdin.readline().split())))
    
total = [[0] * (N+1) for _ in range(N+1)]

for y in range(1, N+1):
    for x in range(1, N+1):
        total[y][x] = data[y-1][x-1] + total[y-1][x] + total[y][x-1] - total[y-1][x-1]
                    
for _ in range(M):
    y1, x1, y2, x2 = map(int, sys.stdin.readline().split())
    print(total[y2][x2] - (total[y1 - 1][x2] +
          total[y2][x1 - 1] - total[y1 - 1][x1 - 1]))
