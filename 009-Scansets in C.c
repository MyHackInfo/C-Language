// Scansets in C
// scanf family functions support scanset specifiers which are represented by %[].
// Inside scanset, we can specify single character or range of characters.
/* A simple scanset example */
#include <stdio.h>

int main(void)
{
    char str[128];

    printf("Enter a string: ");
    scanf("%[A-Z]s", str);

    printf("You entered: %s\n", str);

    return 0;
}
