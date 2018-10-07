/*
 * Fichero de configuracion de matrices
 *
 *
 * Define el tamano de las matrices
 * A[M][L] * B[L][N] = R[M][N]
 */

#ifndef CONFIG_H
#define CONFIG_H

#define M 2
#define N 2
#define L 3
/*
 *tipo de datos
 */
typedef int prodMatT;


// Funcion a verificar
void prodMat (
		prodMatT R[M][N],
 		prodMatT A[M][L],
 		prodMatT B[L][N]);  // he declarado la función
