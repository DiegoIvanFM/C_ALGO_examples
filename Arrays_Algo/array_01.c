#include <stdio.h>
#include <stdlib.h>

void main()
{
        int arreglo_1[10] = {};
        int arreglo_a[2][2];
        int pos_i;
        int pos_j;
        //int arreglo_b[2] = {};
        printf("Array algo \n \n");
       // printf("contenido del arreglo \n");
       // printf("arreglo_1: %i \n", &arreglo_1);
/*
        //llenar arreglo
        for (int j=0; j<10; j++)
        {
                arreglo_1[j] = j;
                printf("ssssarreglo_1 pos[%d]: %d \n", j , arreglo_1[j]);
        }
        
        //leer arreglo
        for (int i=0; i<10; i++)
        {
                printf("arreglo_1 pos[%d]: %d \n", i , arreglo_1[i]);
        }
*/
        //llenar arreglo bidimensional
        for (int i=0; i<=2; i++)
        {
                for(int j=0; j<=2; j++)
                {
                        arreglo_a[i][j]=1;
                }
        }

        //leer arreglo bidimensional
        //llenar arreglo bidimensional
        for (int i=0; i<=2; i++)
        {
                
                for(int j=0; j<=2; j++)
                {
                        printf("%d " ,arreglo_a[i][j]);
                        if(j==2)
                        {
                           printf("\n");
                        }
                }
                
        }

        //cambiar valor de un arreglo
        printf("introduce posicion separado por espacio: \n");
        scanf("%d %d", &pos_i, &pos_j);
        printf("posicion en i: %d \n" ,pos_i);
        printf("posicion en j: %d \n" ,pos_j);
        
} 