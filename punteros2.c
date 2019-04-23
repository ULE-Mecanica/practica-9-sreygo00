/*Realice un programa punteros2D.c en lenguaje C que lea dos n�meros
enteros que especifiquen el n�mero de filas y el n�mero de columnas de una
matriz. La funci�n main reservar� un puntero a una matriz de enteros de
tama�o filas x columnas. A continuaci�n deber� leer los elementos que
componen la matriz y calcular� la suma de los elementos de dicha matriz,
imprimiendo la matriz introducida y el resultado por pantalla. */

#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int f,c,i,j,suma=0;
	int *m;
	
	printf("\nIntroduce el numero de filas: ");
	scanf("%i",&f);
	
	printf("\nIntroduce el numero de columnas: ");
	scanf("%i",&c);
	
	m=(int *)malloc(f*c*sizeof(int));
	
	for(i=0;i<c;i++){
		for(j=0;j<c;j++){
			printf("\nIntroduce los valores de la matriz: ");
			scanf("%i",&*(m+f*i+j));
						}
	}
	
	printf("\nLa matriz es: \n");
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%4i",*(m+f*i+j));
			suma=suma+(*(m+f*i+j));
		}
			printf("\n\n");
	}
	
	printf("\nLa suma es %i.\n",suma);
	
free(m);

return 0;
}
