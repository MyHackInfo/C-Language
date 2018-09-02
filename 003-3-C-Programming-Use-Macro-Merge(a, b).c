#include <stdio.h>
#define MerGe(a, b) a##b
int main()
{
    printf("%d ", MerGe(12, 34));
}
