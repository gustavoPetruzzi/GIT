#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];
    int i, indice;
    int flag = 1;
    int maximo,minimo;
    char opcion = 's';
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

    printf("MAXIMO %d  MINIMO %d\n", maximo, minimo);

    while(opcion=='s')
    {
        printf("Desea modificar un numero? s/n\n");
        scanf(" %c", &opcion);
        if(opcion == 's')
        {
            printf("Ingrese el indice: ");
            scanf("%d", &indice);

            printf("Ingrese el nuevo numero: ");
            scanf("%d", &numeros[indice]);
        }
        flag = 1;

    }

    for(i=0;i<5;i++)
    {
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
    printf("MAXIMO %d  MINIMO %d\n", maximo, minimo);
    return 0;
}
