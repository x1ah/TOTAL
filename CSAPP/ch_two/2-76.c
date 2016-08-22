#include <stdio.h>

int main (void)
{
    int x = 2;
    int res_k_5 = (x << 2) + x;
    int res_k_9 = (x << 3) + x;
    int res_k_30 = (x << 5) - (x << 1);
    int res_k_56 = (x << 3) - (x << 6);
    printf ("%d, %d, %d, %d", res_k_5, res_k_9, res_k_30, res_k_56);
    return 0;
}
