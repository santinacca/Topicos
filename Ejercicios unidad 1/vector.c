#include"vector.h"
#include <stdio.h>
#include <stdlib.h>


int insertarOrdVec(int* vec,int* ce,int elem)
{
    int* ult=vec+(*(ce)-1);
    int* i=vec;
    while(elem>*(i) && *i<*(ult))
    {
        i++;
    }
    if(elem==(*i))
    {
        return 1;
    }
    for(int* j=ult;j>=i;j--)
    {
        *(j+1)=*j;
    }
    *i=elem;
    (*ce)++;
    return 0;
}

void mostrarVec(int* vec,int ce)
{
    int* ult=vec+ce-1;
    for(int* i=vec;i<=ult;i++)
    {
        printf("%d\n",*i);
    }
}

int eliminarPosVec(int* vec,int* ce,int pos)
{
    if(pos>=*ce)
    {
        return 1;
    }
    int* ult=vec+((*ce)-1);
    int* eliminado=vec + pos;
    for(int* j=eliminado;j<ult;j++)
    {
        *j=*(j+1);
    }
    if(pos==*(ce-1))
    {
        *ult=0;
    }
    (*ce)--;
    return 0;

}

int eliminarElemVec(int* vec,int* ce,int elem)
{
    int* ult=vec+((*ce)-1);
    int* i=vec;
    int encontrado=1;
    while(i<=ult && encontrado==1)
    {
        if(*i==elem)
        {
            encontrado=0;
        }
        else
        {
            i++;
        }
    }
    if(encontrado==0)
    {
        for(int* j=i;j<ult;j++)
            {
                *j=*(j+1);
            }
            (*ce)--;
            return 0;
    }
    return 1;
}

int eliminarElemAndRepVec(int* vec,int* ce,int elem)
{
    int* ult=vec+((*ce)-1);
    int* i=vec;
    int* eliminado=vec;
    while(i<=ult)
    {
        if(*i==elem)
        {
            i++;
            (*ce)--;
        }
        else
        {
            if(eliminado!=i)
            {
                *eliminado=*i;
                eliminado++;
                i++;
            }
            else
            {
                i++;
                eliminado++;
            }
        }

    }
    return 0;
}
