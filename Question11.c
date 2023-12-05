#include <stdio.h>

float C, a;
int main()
{
    printf("C = ");
    scanf("%f", &C);
    
    a = (C*9/5)+32;
    printf("F = %f", a);
    
    return 0;
}
