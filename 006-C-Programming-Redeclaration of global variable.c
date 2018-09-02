//C allows a global variable to be declared again when first declaration doesn’t initialize the variable.

#include<stdio.h>
int x;
int x=5;
int main()
{
  printf("%d",x);
  return 0;
}
