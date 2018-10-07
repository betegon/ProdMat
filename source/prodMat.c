/*
 * fichero a sintetizar
 *
 *
 *Producto de matrices tal que: R(MxN)=A(MxL)*B(LxN)
 *
 */

#include "config.h"


// Definimos la funcion. realizara: A[M][L] * B[L][N] = R[M][N]
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

}
