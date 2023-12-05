#include <stdio.h>

float A, B, C, a;
int main()
{
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);
    printf("C = ");
    scanf("%f", &C);
    
    a = A+B+C;
    a = a*a;
    printf("Soma = %f", a);
    
    return 0;
}