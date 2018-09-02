/*
### Differentiate printable and control character in C ###
To find the difference between a printable character and a control
character we can use some predefined functions,
which are declared in the “ctype.h” header file.


*/

// C program to illustrate isprint() and iscntrl() functions.
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch = 'a';
    if (isprint(ch)) {
        printf("%c is printable character\n", ch);
    } else {
        printf("%c is not printable character\n", ch);
    }

    if (iscntrl(ch)) {
        printf("%c is control character\n", ch);
    } else {
        printf("%c is not control character", ch);
    }
    return (0);
}
