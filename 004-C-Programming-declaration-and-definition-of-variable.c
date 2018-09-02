#include <stdio.h>
int main()
{
    // declaration and definition of variable 'a123'
    char a123 = 'a';

    // This is also both declaration and definition as 'b' is allocated
    // memory and assigned some garbage value.
    typedef float get;
    get b;

    // multiple declarations and definitions
    int _c, _d45, e;

    // Let us print a variable
    printf("%c \n", a123);
    printf("%f \n", b);
    printf("%d \n", e);

    return 0;
}

// extern: The main purpose of using extern variables is that they
//        can be accessed between two different files which are part of a large program.
//      extern data_type var_name = var_value;


// static: static keyword is used to declare static variables
//       which are popularly used while writing programs in C language.
//       Global static variables can be accessed anywhere in the program.
//       By default, they are assigned the value 0 by the compiler.
//    static data_type var_name = var_value;

// void: void is a special data type only. But what makes it so special?
//      void, as it literally means an empty data type.

// typedef: typedef is used to give a new name to an already existing or even a custom data type (like a structure).
