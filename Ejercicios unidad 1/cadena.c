#include <stddef.h>
#include"cadena.h"
char* copiarCadena(char* destino,const char* origen)
{
    char* aux=destino;
    while(*origen!='\0')
    {
        *aux=*origen;
        origen++;
        aux++;
    }
    *aux='\0';
    return destino;
}
char* concatenarCadena(char* cad, const char* agregado)
{
    char* aux=cad;
    while(*aux!='\0')
    {
        aux++;
    }
    while(*agregado!='\0')
    {
        *aux=*agregado;
        aux++;
        agregado++;
    }
    *aux='\0';
    return cad;
}
int compararCadena(const char* cad1, const char* cad2)
{
    while(*cad1!='\0')
    {
        if(*cad1>*cad2)
        {
            return(*cad1-*cad2);
        }
        else if(*cad1<*cad2)
        {
            return(*cad1-*cad2);
        }
        else
        {
            cad1++;
            cad2++;
        }
    }
    if(*cad2!='\0')
    {
        return(*cad1-*cad2);
    }
    else
    {
        return(*cad1-*cad2);
    }
}
char* strchrCadena(const char* cad, int c)
{
    while(*cad!='\0')
    {
        if(*cad==c)
        {
            return (char*)cad;
        }
        cad++;
    }
    return NULL;
}

int cantLetrasCadena(char* cad)
{
    int cont=0;
    while(*cad!='\0')
    {
        cont++;
        cad++;
    }
    return cont;
}

int esPalindromo(char* cad)
{
    char* inicio=cad;
    int cantlet=cantLetrasCadena(cad);
    char* fin=cad + cantlet-1;
    while(inicio<fin)
    {
        while((ESLETRA(*inicio)) && (ESLETRA(*fin)))
        {
            if((AMAYUS(*inicio))==(AMAYUS(*fin)))
            {
                inicio++;
                fin--;
            }
            else
            {
                return 0;
            }
        }
        if(!ESLETRA(*inicio))
        {
            inicio++;
        }
        else
        {
            fin--;
        }
    }
    return 1;
}

char* desofuscar(char* cad,char* cod)
{
    char* desofuscada=cad;
    char* aux;
    int cont=0;
    int cantletra=cantLetrasCadena(cod);
    while(*desofuscada!='\0')
    {

        if(ESLETRA(*desofuscada))
        {
            cont++;
            aux=strchrCadena(cod,*desofuscada);
            if(aux!=NULL)
            {
                int pos = (aux - cod + cont) % cantletra;
                *desofuscada=*(cod+pos);
            }
            desofuscada++;
        }
        else
        {
            cont=0;
            desofuscada++;
        }
    }
    return cad;
}
