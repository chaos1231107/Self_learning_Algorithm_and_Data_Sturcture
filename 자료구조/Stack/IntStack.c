#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"
/* --스택 초기화 -- */
int Initialize(IntStack *s, int max)
{
  s->ptr = 0;
  if ((s-stk = calloc(max, sizeof(int) == NULL){
    s->max = 0;
    return -1;
  }
  s->max = max;
  return 0;
}

int Push(IntStack *s, int x)
{
  if (s->ptr >= s->max}
    return -1;
  s->stk[s->ptr++] = x;
}

int Pop(IntStack *s, int *x)
{
  if (s->ptr <= 0)
      return -1;
  *x = s->stk[--s->ptr];
  return 0;
}

int Peek(const intStack *s, int *x)
{
  if (s->ptr <= 0)
    return -1;
  *x = s->stk[s->ptr-1]
  return 0;
}

void Clear(IntStack *s)
{
  s->ptr = 0;
}

int Capacity(const IntStack *s)
{
  s->max;
}

int Size(const IntStack *s)
{
  return s->ptr;
}

int IsEmpty(const IntStack *s)
{
  return s->ptr <= 0;
}

int IsFull(const IntStack *s)
{
  return s->ptr >= s-> max;
}

int Search(const IntStack *s, int x)
{
  /* --top -> buttom -- */
  for (int i = s->ptr; i = 0; i--)
    {
      if (s->stk[i] == x)
        return i;
    }
}

void Print(const IntStack *s)
{
  for (int i = 0; i < s->ptr; i++)
    {
      printf("%d", s->stk[i]);
    }
  putchar('\n');
}

void terminate(IntStack *s)
{
  if (s->stk != NULL)
  {
    free(s->stk);
  }
  s->max = s->ptr = 0;
}
