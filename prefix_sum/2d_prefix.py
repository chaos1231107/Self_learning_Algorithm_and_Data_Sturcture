import sys
input = sys.stdin.readline

N, M = map(int, input().split())
arr = [] 

for _ in range(N):
    arr.append(list(map(int, input().split())))
    
prefix_sum = [[0] * (N+1) for _ in range(N+1)]

for y in range(1, N+1):
    for x in range(1, N+1):
        prefix_sum[y][x] = arr[y-1][x-1] + prefix_sum[y-1][x] \
                            + prefix_sum[y][x-1] - prefix_sum[y-1][x-1]

for _ in range(M):
    y1, x1, y2, x2 = map(int, input().split())
    result = prefix_sum[y2][x2] - prefix_sum[y1-1][x2] \
                - prefix_sum[y2][x1-1] + prefix_sum[y1-1][x1-1]
            
    print(result)
