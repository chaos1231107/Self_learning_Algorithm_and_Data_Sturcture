import sys

n_a, n_b = map(int, sys.stdin.readline().split())

a = []
b = []

a = set(map(int, sys.stdin.readline().split()))
b = set(map(int, sys.stdin.readline().split()))

print(len(a-b))
print(*sorted(list(a-b)))
