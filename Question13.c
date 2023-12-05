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
    
    a = A*A+B*B+C*C;
    printf("Soma = %f", a);
    
    return 0;
}