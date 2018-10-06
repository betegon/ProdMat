/* el test tiene que tener obligatoriamente la funcion main
* el valor de retorno de la funcion main es interpretado pro la herramienta de sintesis
* si retorna 0 se interpreta como que no ha habido errores.
*Cualquier otro retorno diferente de 0 se interpreta como que hay errores.
*/
#include "config.h"


int main (){
	int nerrores; // n de errores
	int i,j,k;
	// Paso 1 - crear elementos, R, A, B
	// Paso 2 - dar valroes a los elementos R, A, B
	prodMat R[M][N];		//resultado
	prodMat A[M][L]={1};	// matriz dato 1
	prodMat B[L][N]={2};	// matriz dato 2

	/*
	 * DEFINIR LAS MATRICES FUERA/DENTRO DEL MAIN:
	 *
	 * Si las definimos dentro del main (como aqui) pues entonces son variables locales.
	 * al ser variables locales, se asignan en memoria Stack.
	 * la pila o stack de las funciones es pequeña, si las matrices son grandes
	 * se desbordaria.
	 *
	 * Por eso si son grandes las matrices, deberiamos definirlas fuera del main.
	 *
	 */



	prodmatT R_esp[M][N]={2*L}; 		// Resultado esperado


	// Paso 3 - ejecutar la funcion
	prodMat(R,A,B);

	// Paso 4 - comprobar resultados
	nerrores=0;
	for(i=0; i<M;i++){
		for(j=0; j<N;j++) // solo tiene una instrucción (if), no hace falta llaves.
			if(R[i][j]!=R_esp[i][j])
				nerrores++; // como este if solo tiene una instrucción no hacen falta llaves
	}



if (nerrores==0)
	return 0; //no hay errores
else
	return nerrores; // retorna un valor !=0
}

