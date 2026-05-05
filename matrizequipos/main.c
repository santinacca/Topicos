#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int verificarpuntos(int [][TAM],int [][6], int);
int simetria(int puntosA,int sistemaB, int [][6]);
int* puntaje(int [][TAM],int);
void mostrarvec(int* vec,int ce);
int main()
{
    int puntos[TAM][TAM]={{0,1,2,3,4},
                          {4,0,2,3,4},
                          {2,2,0,3,2},
                          {3,3,3,0,4},
                          {1,1,2,1,0}
                         };
    int sistemaPuntos[][6]={{6,4,3,2,1,0},
                            {0,1,3,2,4,6}
                           };

    int ver=verificarpuntos(puntos,sistemaPuntos,TAM);
    //printf("%d\n",ver);
    if(ver)
    {
        int* tabla=puntaje(puntos,TAM);
        mostrarvec(tabla,TAM);
    }
    return 0;
}

int verificarpuntos(int puntos[][TAM],int sistema[][6], int ce)
{
    int aux=1;
    for(int i=0;i<ce-1;i++)
    {
        for(int j=ce-1;j>i;j--)
        {
            aux=simetria(puntos[i][j],puntos[j][i],sistema);
            if(aux==0)
            {
                return aux;
            }
        }
    }
    return aux;
}

int simetria(int puntosA,int puntosB,int sistema[][6])
{
    for(int i=0;i<6;i++)
    {
        if(sistema[0][i]==puntosA)
        {
            if(sistema[1][i]==puntosB)
            {
                return 1;
            }
        }
    }
    return 0;
}

int* puntaje(int puntos[][TAM],int ce)
{
    int* vec=malloc(ce*sizeof(int));
    int cont;
    for(int i=0;i<ce;i++)
    {
        cont=0;
        for(int j=0;j<ce;j++)
        {
            cont+=puntos[i][j];
        }
        *(vec+i)=cont;
    }
    return vec;
}

void mostrarvec(int* vec,int ce)
{
    for(int i=0;i<ce;i++)
    {
        printf("%d\n",*(vec+i));
    }
}
