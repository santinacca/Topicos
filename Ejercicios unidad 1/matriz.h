#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED
#define COL 4
#define FIL 4
#include <stdio.h>
#include <stdlib.h>
int sumaArribaDiag(int mat[][COL],int fil,int col);
int sumaAbajoDiag(int mat[][COL],int fil,int col);
int sumaDiagPri(int mat[][COL],int fil);
int sumaDiagSec(int mat[][COL],int fil);
int esMatDiag(int mat[][COL],int fil,int col);
int esMatIden(int mat[][COL],int fil,int col);
int esMatSim(int mat[][COL],int fil,int col);
void trasponerMatCuad(int mat[][COL],int fil,int col);
void trasponerMat(int mat[4][5],int tras[5][4],int fil,int col);
void mostrarMat(int mat[][COL],int fil,int col);
int** crearMat(size_t fil,size_t col);
void destruirMat(int** mat,size_t fil);

#endif // MATRIZ_H_INCLUDED
