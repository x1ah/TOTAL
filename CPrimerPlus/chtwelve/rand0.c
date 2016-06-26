static unsigned long int next = 1;
int rand0 (void)
{
    next = next * 110351245 + 1234;
    return (unsigned int) (next/65536) % 32768;
}
