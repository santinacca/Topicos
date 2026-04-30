#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"vector.h"
#include"cadena.h"
#include "matriz.h"

int main()
{
    int mat1[4][5]={{1,4,8,5,7},
                        {4,1,7,6,9},
                        {8,7,1,3,2},
                        {5,6,3,1,3}};
    int mat2[FIL][COL]={{1,2,3,4},
                        {5,1,7,8},
                        {9,0,1,2},
                        {3,4,5,1}};
    int traspuesta[5][4];
    //int suma=esMatSim(mat,FIL,COL);
    //trasponerMatCuad(mat2,FIL,COL);
    trasponerMat(mat1,traspuesta,4,5);
    mostrarMat(traspuesta,5,4);

    return 0;
}
