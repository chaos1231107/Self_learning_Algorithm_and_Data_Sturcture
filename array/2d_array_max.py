import sys
rows = 9
cols = 9
matrix = []

for i in range(rows):
    r = list(map(int, sys.stdin.readline().split()))
    matrix.append(r)
    
max_value = -float('inf')
max_position = (0,0)

for i in range(rows):
    for j in range(cols):
        # TODO: write code... j in range(cols):
        if matrix[i][j] > max_value:
            max_value = matrix[i][j]
            max_position = (i+1, j+1)

print(max_value)
print(max_position[0], max_position[1])
