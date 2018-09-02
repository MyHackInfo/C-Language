/*
In C printf(), %n is a special format specifier which instead of printing something causes
    printf() to load the variable pointed by the corresponding argument with a value equal to
    the number of characters that have been printed by printf() before the occurrence of %n.


*/

#include<stdio.h>
int main()
{
  int c;
  printf("go to the ocen %n ", &c);
  printf("%d", c);
  getchar();
  return 0;
}
