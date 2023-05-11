#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, d, c, a;
    printf("Digite o Raio da circunferência: ");
    scanf("%f",&raio);
    
    d = 2*raio;
    c = 2*3.14*raio;
    a = 3.14*raio*raio;
    
    printf("Diâmetro: %.3f \n", d);
    printf("Comprimento: %.3f \n", c);
    printf("Área: %.3f \n", a);

    return 0;
}