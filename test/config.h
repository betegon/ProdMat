/*
 * Fichero de configuracion de matrices
 *
 *
 * Define el tamano de las matrices
 * A[M][L] * B[L][N] = R[M][N]
 */

#define M 10
#define N 5
#define L 6
/*
 *tipo de datos
 */
typedef int prodMatT;


// Funcion a verificar
void prodMat (
		prodMatT R[M][N],
 		prodMatT A[M][L],
 		prodMatT B[L][N]);  // he declarado la función

