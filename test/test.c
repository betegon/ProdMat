/*el test tiene que tener obligatoriamente la funcion main
* el valor de retorno de la funcion main es interpretado pro la herramienta de sintesis
* si retorna 0 se interpreta como que no ha habido errores.
* Cualquier otro retorno diferente de 0 se interpreta como que hay errores.
*/
#include "config.h"
#include <stdio.h>

// Paso 1 - crear elementos, R, A, B
// Declaración de variables:
prodMatT R[M][N];		//resultado
prodMatT R_Good[M][N];	//resultado esperado
prodMatT A[M][L];	// matriz dato 1
prodMatT B[L][N];	// matriz dato 2





int main (){
	int i,j,k;
	int nerrores; // n de errores

	// Paso 1 - crear elementos, R, A, B
	/* prodMat R[M][N];		//resultado
	 * prodMat A[M][L];	// matriz dato 1
	 * prodMat B[L][N];	// matriz dato 2
	 */
	/*
	 * DEFINIR LAS MATRICES FUERA/DENTRO DEL MAIN:
	 *
	 * Si las definimos dentro del main (aqui estan definidas fuera y aqui dentro comentadas) pues entonces son variables locales.
	 * al ser variables locales, se asignan en memoria Stack.
	 * la pila o stack de las funciones es pequeña, si las matrices son grandes
	 * se desbordaria.
	 *
	 * Por eso si son grandes las matrices, deberiamos definirlas fuera del main.
	 *
	 */


	// Paso 2 - dar valores a los elementos R_Good, A, B
	// Inicializacion de variables
		for(i=0;i<M;i++)
			for(j=0;j<N;j++)
				R_Good[i][j]= 2*L;

		for(i=0;i<M;i++)
			for(j=0;j<L;j++)
				A[i][j]=1;

		for(i=0;i<L;i++)
			for(j=0;j<N;j++)
				B[i][j]=2;




	B[2][3]=3; // Inserta error


	// Paso 3 - ejecutar la funcion de test
	prodMat(R,A,B);

	// Paso 4 - comprobar resultados
	nerrores=0;
	for(i=0; i<M;i++){
		for(j=0; j<N;j++) // solo tiene una instrucción (if), no hace falta llaves.
			if(R_Good[i][j]!=R[i][j])
				nerrores++; // como este if solo tiene una instrucción no hacen falta llaves
	}


	if (nerrores==0){
		printf("No hay errores\n");
		return 0; //no hay errores
	}
	printf(" ATENCION: Hay %d errors\n", nerrores);
	return 1; // retornar un valor !=0 para indicar que hay errores.
}

