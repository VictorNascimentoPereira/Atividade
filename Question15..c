#include <stdio.h>

float A, B, a;
int main()
{
    printf("Km = ");
    scanf("%f", &A);
    printf("Litros = ");
    scanf("%f", &B);
    
    a = A/B;
    
    printf("Consumo = %.2f km/l", a);
    
    return 0;
}
