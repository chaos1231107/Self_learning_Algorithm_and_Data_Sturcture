from collections import Counter

n = int(input())
b_list = []
cnt = 0

for _ in range(n):
    string = input()
    b_list.append(string)
    
b_list.sort()
freq = Counter(b_list)
best, count = freq.most_common(1)[0]
print(best)
