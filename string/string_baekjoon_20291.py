from collections import Counter

str_list = []
expend = [] # 확장자
n = int(input())
for _ in range(n):
    string = input()
    str_list.append(string)
    
for s in str_list:
    for i in range(len(s)):
        if s[i] == '.':
            expend.append(s[i+1:])
            break
        
freq = Counter(expend)

for elem in sorted(freq):
    print(f"{elem} {freq[elem]}")
