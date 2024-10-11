## Stack : 일시적으로 데이터를 저장하기 위한 Last In First Out(LIFO)의 구조를 가지는 자료구조.
### 함수가 호출될 때 Push()가 return값을 반환하고 종료될 때 Pop()이 일어난다.
## Stack의 구현
### Programming Language : C/C++
<h1>
<img src="https://img.shields.io/badge/C-3776AB?style=for-the-badge&logo=C&logoColor=black">
<img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++ Badge">
</h1>

## Stack 구조체 (IntStack) : Stack을 관리하는 구조체, typedef Struct를 통해 declare된다
## Files
### IntSack.h : Stack을 구현할 때 필요한 함수들을 저장하는 header file
## Paramaters
### I) stk -> Stack으로 사용할 배열을 가리키는 Pointer
### II) max -> Stack의 최대용량을 나타내는 int형 멤버, stk의 요소개수와 동일
### III) ptr -> Stack Pointer, Stack이 쌓여있는 데이터의 개수

## Functions
### I) int Initialize(IntStack *s, int max) : Stack으로 사용할 array를 Initialize 하는 함수
### II) Push(IntStack *s, int x) :  Stack에 데이터를 추가하는 함수
### III) Pop(IntStack *s, int *x) : Stack에서 데이터를 빼내는 함수
### IV) Peek(IntStack *s, int *x) : Top의 데이터를 엿보는 함수
### V) Clear(IntStack *s) : Stack의 모든 요소를 삭제하는 함수
### VI) IsEpty(const IntStack *s) : Stack이 비어있는지 확인하는 함수
### VII) Capacity(const IntStack *s) : Stack의 용량을 확인하는 함수
### VIII) IsFULL(const IntStack *s) : Stack이 가득 찼는지 확인하는 함수
### IX) Search(IntStack *s, int x) : Stack에서 임의의 값을 탐색하는 함수
### X) Print(IntStack *s) : Stack의 모든 데이터를 출력하는 함수
### XI) Terminate(IntStack *s) : Stack을 종료시키는 함수, Stack으로 사용하고 있는 배열을 삭제

## References
### Stack : https://www.youtube.com/watch?v=Q2Up3PN0-nM
### Stack, push(), pop() : Operating Systems Concept
### Stack Pointer : 혼자공부하는 컴퓨터 구조 + 운영체제(강민철 저)
### do it 자료구조로 배우는 알고리즘 입문 C언어편
### Unix System (이승주 저)


