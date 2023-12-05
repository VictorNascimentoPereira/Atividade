#include <stdio.h>

float num1, a, b;
int main()
{
    
    scanf("%f", &num1);
    a = 3.14159265*(num1*num1);
    b = 6.28*num1;
    printf("Área = %f \nComprimento = %f", a, b);
    
    return 0;
}