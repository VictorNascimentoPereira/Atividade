#include <stdio.h>

float num1, num2, num3;

int main()
{
    
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    printf("Soma = %f \nSubtração = %f \nMutiplicação = %f \nDivisão = %f",num1+num2+num3,num1-num2-num3,num1*num2*num3,num1/num2/num3);
    
    return 0;
}