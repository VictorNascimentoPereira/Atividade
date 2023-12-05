#include <stdio.h>

float F, a;
int main()
{
    printf("F = ");
    scanf("%f", &F);
    
    a = 5.0/9.0*(F - 32.0);
    printf("C = %f", a);
    
    return 0;
}