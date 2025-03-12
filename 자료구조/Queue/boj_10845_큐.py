import sys

queue = []
N = int(sys.stdin.readline())

for _ in range(N):
    order = sys.stdin.readline().strip()
    
    if order.startswith('push'):
        _, x = order.split()
        queue.append(int(x))
    
    elif order == 'pop':
        if queue:
            print(queue.pop(0))
        else:
            print('-1')
    
    elif order == 'size':
        print(len(queue))
    
    elif order == 'empty':
        if len(queue) == 0:
            print('1')
        else:
            print('0')
    
    elif order == 'front':
        if len(queue) == 0:
            print('-1')
        else:
            print(queue[0])

    elif order == 'back':
        if len(queue) == 0:
            print('-1')
        else:
            print(queue[-1])
