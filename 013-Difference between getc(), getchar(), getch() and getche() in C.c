/*
#### Difference between getc(), getchar(), getch() and getche()####
All of these functions read a character from input and return an integer value.

1-getc():
    It reads a single character from a given input stream and returns the corresponding
    integer value (typically ASCII value of read character) on success.

2-getchar():
    The difference between getc() and getchar() is getc() can read from any input stream,
    but getchar() reads from standard input. So getchar() is equivalent to getc(stdin).

3-getch():
    getch() is a nonstandard function and is present in conio.h header file which is
    mostly used by MS-DOS compilers like Turbo C. It is not part of
    the C standard library or ISO C, nor is it defined by POSIX .

4-getche():
    Like getch(), this is also a non-standard function present
    in conio.h. It reads a single character from the keyboard and
    displays immediately on output screen without waiting for enter key.

*/
// Example for getc() in C
#include <stdio.h>
#include <conio.h>

int main()
{
   //printf("%c", getc(stdin));
   //printf("%c", getchar());
   //printf("%c", getch());
   //printf("%c", getche());
   return(0);
}
