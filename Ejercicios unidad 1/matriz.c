#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
int sumaArribaDiag(int mat[][COL],int fil,int col)
{
    int acum=0;
    for(int i=0;i<fil;i++)
    {
        for(int j=3;j>i;j--)
        {
            acum+=mat[i][j];
        }
    }
    return acum;
}

int sumaAbajoDiag(int mat[][COL],int fil,int col)
{
    int acum=0;
    for(int i=1;i<fil;i++)
    {
        for(int j=0;j<i;j++)
        {
            acum+=mat[i][j];
        }
    }
    return acum;
}

int sumaDiagPri(int mat[][COL],int fil)
{
    int acum=0;
    for(int i=0;i<fil;i++)
    {
        acum+=mat[i][i];
    }
    return acum;
}

int sumaDiagSec(int mat[][COL],int fil)
{
    int acum=0;
    for(int i=0;i<fil;i++)
    {
        acum+=mat[i][3-i];
    }
    return acum;
}

int esMatDiag(int mat[][COL],int fil,int col)
{
    int encontrado=1,i=0,j=0;
    while(i<fil && encontrado==1)
    {
        if(mat[i][i]==0)
        {
            encontrado=0;
        }
        else
        {
            j=0;
        }
        while(j<col && encontrado==1)
        {
            if(mat[i][j]!=0 && i!=j)
            {
                encontrado=0;
            }
            else
            {
                j++;
            }
        }
        if(encontrado==1)
        {
            i++;
        }
    }
    return encontrado;
}

int esMatIden(int mat[][COL],int fil,int col)
{
    int encontrado=1,i=0,j=0;
    while(i<fil && encontrado==1)
    {
        if(mat[i][i]!=1)
        {
            encontrado=0;
        }
        else
        {
            j=0;
        }
        while(j<col && encontrado==1)
        {
            if(mat[i][j]!=0 && i!=j)
            {
                encontrado=0;
            }
            else
            {
                j++;
            }
        }
        if(encontrado==1)
        {
            i++;
        }
    }
    return encontrado;
}

int esMatSim(int mat[][COL],int fil,int col)
{
    int encontrado=1,i=0,j=0;
    while(i<fil && encontrado==1)
    {
        j=0;
        while(j<col && encontrado==1)
        {
            if(mat[i][j]!=mat[j][i] && i!=j)
            {
                encontrado=0;
            }
            else
            {
                j++;
            }
        }
        if(encontrado==1)
        {
            i++;
        }
    }
    return encontrado;
}

void trasponerMatCuad(int mat[][COL],int fil,int col)
{
    int aux;
    for(int i=0;i<fil-1;i++)
    {
        for(int j=1+i;j<col;j++)
        {
            aux=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=aux;
        }
    }
}

void trasponerMat(int mat[4][5],int tras[5][4],int fil,int col)
{
    for(int i=0;i<fil;i++)
    {
        for(int j=0;j<col;j++)
        {

            tras[j][i]=mat[i][j];
        }
    }
}

void mostrarMat(int mat[][COL],int fil,int col)
{
    for(int i=0;i<fil;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int** crearMat(size_t fil,size_t col)
{
    int**mat=malloc(fil*sizeof(int*));
    int**aux=mat;
    if(!mat)
    {
        return NULL;
    }
    for(int i=0;i<fil;i++)
    {
        *mat=malloc(col*sizeof(int));
        if(!(*mat))
        {
            destruirMat(aux,i);
            return NULL;
        }
        else
        {
            mat++;
        }
    }
    return aux;
}

void destruirMat(int** mat,size_t fil)
{
    mat+=fil;
    for(int i=0;i<fil;i++)
    {
        mat--;
        free(*mat);
    }
    free(mat);
}
