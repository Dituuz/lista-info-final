#include <stdio.h>

int main()
{
    int num=1;
    printf("Numeros pares de 1 a 100:\n");
    while (num<=100)
    {
        if (num%2 == 0){
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}