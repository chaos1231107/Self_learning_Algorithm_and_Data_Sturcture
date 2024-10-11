#include ___IntStack
#define ___IntStack

typedef Struct {
  int max;
  int ptr;
  int *stk;
}IntStack;

int Initialize(IntStack *s, int max);

int Push(IntStack *s, int x);

int Pop(IntStack *s, int x);

int Peek(const IntStack *s, int x);

int Clear(IntStack *s);
/* Stack의 최대용량  */
int Capacity(IntStack *s);

int Size(const IntStack *s);

int IsEmpty(const IntStack *s);
/* Stack에서 검색 */
int Search(const IntStack *s, int x);

void Print(const IntStack *s);

void Terminate(const IntStack *s);

#endif
