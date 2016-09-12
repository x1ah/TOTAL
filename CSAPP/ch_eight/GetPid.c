#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{
    pid_t foo, bar;
    foo = getpid ();
    bar = getppid();

    printf ("%d, %d\n", foo, bar);
    return 0;
}
