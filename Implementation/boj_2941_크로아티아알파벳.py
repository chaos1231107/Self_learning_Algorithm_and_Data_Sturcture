char = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

string = input()
cnt = 0

for e in char:
    while string.find(e) > -1:
        i = string.find(e)
        string = string[:i]+' '+string[i+len(e):]
        cnt += 1
        
cnt += len(string.replace(' ',''))
                
print(cnt)
