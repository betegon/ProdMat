/*
 * fichero a sintetizar
 *
 *
 *Producto de matrices tal que: R(MxN)=A(MxL)*B(LxN)
 *
 */


#include "config.h"
#include <stdio.h>
// Definimos la funcion. realizara: A[M][L] * B[L][N] = R[M][N]

const int A[2][3]=
{
    {1, 2, 3},
    {2, 3, 4}
};

const int B[3][2]=
{
    {1, 2},
    {2, 3},
    {3, 4}
};

int R[2][2];


void prodMat (
		prodMatT R[M][N], // Matriz resultado
		prodMatT A[M][L], // Primer operando
		prodMatT B[L][N]){  // Segundo operando

	int i,j,k, prod;
	lazoFilas:	for(i=0;i<M;i++){ // ciclo por filas de A
		LazoColumnas:	for(j=0;j<N;j++){ // ciclo por columnas de B
			prod=0;
			lazo: for(k=0;k<L;k++){ // ciclo por filas de B
				prod+=A[i][k]*B[k][j];
			}
			R[i][j]=prod;
		}
	}
	int row, columns;
	for (int row=0; row<M; row++)
	{
	    for(int columns=0; columns<N; columns++)
	        {
	         printf("%d     ", R[row][columns]);
	        }
	    printf("\n");
	 }
}


main (){
	printf("Hellow world\n");
	prodMat(R,A,B);

}
