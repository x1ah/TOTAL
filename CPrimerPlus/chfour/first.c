#include <stdio.h>
int main(void) //注释
{
    int num;
    int foo;
    num = 1;
    num = 2;
    num = 3;
    foo = num;

    printf ("I am a simple ");
    printf ("computer.\n");
    printf ("My favorite number is %d because it is first.\n", num);
    printf ("foo: %d\n", foo);
    num = 4;
    printf ("foo: %d\n", foo);
    return 0;
}
