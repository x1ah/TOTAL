#include <stdio.h>
int main()
{
    float weight, value;
    int test;
    char grade = 'A';
    float f = 10.0;
    double d = 20.00;
    int i = 10;
    int s;
    s = f * d* i;
    printf ("Are you worth your weight in rhodium?\b");
    printf ("Let's check it out.\n");
    printf ("Please enter your weight in pounds: ");
    scanf ("%f", &weight);
    value = 770 * weight * 14.5833;
    printf ("foo is: %#o ,test is %d: . Your weight in rhodium is worth $%.2f\n float x double x int = %d.\n", 16, grade, value, s);
    printf ("finished...\a\a\a你好世界\n");
    return 0;
}
