/*Realice un programa matriz.c en lenguaje C que almacene en una matriz de
tamaño 10x10 los 100 primeros números enteros e imprima dicha matriz
por pantalla */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *mat;
	int c=10,f=10,i,j,l;
	
	mat=(int *)malloc(f*c*sizeof(int));
	
		for(i=0;i<f;i++){
		for(j=0;j<c;j++){
				l++;
				*(mat+f*i+j)=l;
					}
					}
					
					
	printf("\nLa matriz es: \n");
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%4i",(*(mat+f*i+j)));
						}
		printf("\n\n");
					}

free(mat);
return 0;									
}
