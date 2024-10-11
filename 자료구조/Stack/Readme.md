## Stack : 일시적으로 데이터를 저장하기 위한 Last In First Out(LiFO)의 구조를 가지는 자료구조.
### 함수가 실행될 때 Push()가 종료될 때 Pop()이 일어난다.

## Stack 구조체 (IntStack) : Stack을 관리하는 구조체
## Files
### IntSack.h : Stack을 구현하기 위한 C언어로 작성된 header file
## Paramaters
### I) stk -> Stack으로 사용할 배열을 가리키는 Pointer
### II) max -> Stack의 최대용량을 나타내는 int형 멤버, stk의 요소개수와 동일
### III) ptr -> Stack Pointer, Stack이 쌓여있는 데이터의 개수

## Functions
### I) Push(IntStack *s, int x) : Stack에 데이터를 추가하는 함수
### II) Pop(IntStack *s, int *x) : Stack에서 데이터를 빼내는 함수
### III) Peek(IntStack *s, int *x) : Top의 데이터를 엿보는 함수
### IV) Clear(IntStack *s) : Stack의 모든 요소를 삭제하는 함수
### V) IsEpty(const IntStack *s) : Stack이 비어있는지 확인하는 함수
### VI) Capacity(const IntStack *s) : Stack의 용량을 확인하는 함수
### VII) IsFULL(const IntStack *s) : Stack이 가득 찼는지 확인하는 함수
### VIII) Search(IntStack *s, int x) : Stack에서 임의의 값을 탐색하는 함수
### IX) Print(IntStack *s) : Stack의 모든 데이터를 출력하는 함수
### X) Terminate(IntStack *s) : Stack을 종료시키는 함수, Stack으로 사용하고 있는 배열을 삭제

