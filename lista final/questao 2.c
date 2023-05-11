#include <stdio.h>

int main()
{
    int num, s, a;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    s= num+1;
    a= num-1;
    
    printf("O sucessor desse numero é: %d\n", s);
    printf("O antecessor desse numero é: %d\n", a);

    return 0;
}