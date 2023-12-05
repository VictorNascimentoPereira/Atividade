#include <stdio.h>

float num1, num2;

int main()
{
    
    scanf("%f", &num1);
    scanf("%f", &num2);
    printf("Soma = %f \nSubtração = %f \nMutiplicação = %f \nDivisão = %f",num1+num2,num1-num2,num1*num2,num1/num2);
    
    return 0;
}