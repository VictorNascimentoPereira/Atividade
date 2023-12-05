#include <stdio.h>

float B, b, h, a;
int main()
{
    printf("B = ");
    scanf("%f", &B);
    printf("b = ");
    scanf("%f", &b);
    printf("h = ");
    scanf("%f", &h);
    a = (B+b)*h/2;
    printf("Área = %f", a);
    
    return 0;
}