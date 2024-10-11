## Stack : Last In First Out(LiFO)의 구조를 가지는 자료구조, 일시적으로 데이터를 저장하기 위해사용
### 함수가 실행될 때 Push()가 종료될 때 Pop()이 일어난다.

## Stack 구조체 (IntStack) : Stack을 관리하는 구조체

### I) stk -> Stack으로 사용할 배열을 가리키는 Pointer
### II) max -> Stack의 최대용량을 나타내는 int형 멤버, stk의 요소개수와 동일
### III) ptr -> Stack Pointer, Stack이 쌓여있는 데이터의 개수
