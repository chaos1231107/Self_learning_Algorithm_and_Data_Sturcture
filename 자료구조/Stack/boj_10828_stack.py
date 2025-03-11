import sys

stack= []
N = int(sys.stdin.readline())

for _ in range(N):
    order = sys.stdin.readline().strip()
    if order.startswith('push'):
        _, value = order.split()
        stack.append(int(value))
        
    elif order == 'pop':
        if len(stack) == 0:
            print('-1')
        else:
            print(stack.pop())
            
    elif order == 'size':
        print(len(stack))
    
    elif order == 'empty':
        if len(stack) == 0:
            print('1')
        else:
            print('0')
    
    elif order == 'top':
        if len(stack) == 0:
            print('-1')
        else:
            print(stack[-1])
