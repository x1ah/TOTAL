#include <stdio.h>
int sra (int x, int k);
unsigned srl (unsigned x, int k);

int main (void)
{
    return 0;
}

int sra (int x, int k)
{
    int xsrl = (unsigned) x >> k;
    int w = sizeof (int) << 3;
    return xsrl & ((1 << (w-k))-1);
}

unsigned srl (unsigned x, int k)
{
    unsigned xsra = (int) x >> k;
    int w = sizeof (int) << 3;
    return (~xsra) ^ ((1 << (w-k))-1);
}
