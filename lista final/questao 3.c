#include <stdio.h>

int main()
{
    float m, dm, cm, mm;
    printf("Digite a medida em metros: ");
    scanf("%f",&m);
    
    dm = m*10;
    cm = m*100;
    mm = m*1000;
    
    printf("A medida correspondente em decímetros: %.3f\n", dm);
    printf("A medida correspondente em centímetros: %.3f\n", cm);
    printf("A medida correspondente em milímetros: %.3f\n", mm);

    return 0;
}