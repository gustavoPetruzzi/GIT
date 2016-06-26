#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];
    int i;
    int flag = 1;
    int maximo,minimo;
    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
        if(flag== 1)
        {
            maximo = numeros[i];
            minimo = numeros[i];
            flag = 0;
        }
        if(numeros[i]> maximo)
        {
            maximo = numeros[i];
        }
        if(numeros[i]< minimo)
        {
            minimo = numeros[i];
        }

    }
    printf("MAXIMO %d  MINIMO %d", maximo, minimo);
    return 0;
}
