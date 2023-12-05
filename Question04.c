#include <stdio.h>

int num1, num2, num3;

int main()
{
    
    scanf("%i", &num1);
    scanf("%i", &num2);
    scanf("%i", &num3);
    printf("Soma = %i \nSubtração = %i \nMutiplicação = %i",num1+num2+num3,num1-num2-num3,num1*num2*num3);
    
    return 0;
}