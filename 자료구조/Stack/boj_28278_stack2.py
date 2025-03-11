import sys

N = int(sys.stdin.readline())
stack = []

for _ in range(N):
    order = sys.stdin.readline().strip()
    if order.startswith('1'):
        _, x = order.split()
        stack.append(x)
        
    elif order == '2':
        if len(stack) == 0:
            print('-1')
        else:
            print(stack.pop())
    
    elif order == '3':
        print(len(stack))
    
    elif order == '4':
        if len(stack) == 0:
            print('1')
        else:
            print('0')
    
    elif order == '5':
        if len(stack) == 0:
            print('-1')
        else:
            print(stack[-1])
