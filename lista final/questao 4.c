#include <stdio.h>

int main()
{
    int num=0;
    printf("Numeros impares de 1 a 100:\n");
    while (num<=100)
    {
        if (num%2 == 1){
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}