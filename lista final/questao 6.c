#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, s, p, q, r, soma, d1, d2, d, seno;
    printf("digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("digite o segundo numero: ");
    scanf("%f",&num2);
    s= num1+num2;
    p= num1*num2*num2;
    q= num1*num1;
    d1 = pow(num1, 2);
    d2 = pow(num2, 2);
    soma = d1+d2;
    r=pow(soma , 0.5);
    d= num1 - num2;
    seno= sin(d);
    printf("%f", seno);

    return 0;
}