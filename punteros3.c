/*Realice un programa primos.c en lenguaje C que lea dos n�meros enteros
que especifiquen el n�mero de filas y el n�mero de columnas de una matriz.
La funci�n main reservar� un puntero a una matriz de enteros de tama�o
filas x columnas. A continuaci�n deber� inicializar la matriz con los primeros
filas x columnas n�meros primos y mostrar� la matriz por pantalla. */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int f,c,i,j,k=1,l=2,n=2;
	int *m;
	
	printf("\nIntroduce el numero de filas: ");
	scanf("%i",&f);
	
	printf("\nIntroduce el numero de columnas: ");
	scanf("%i",&c);
	
	m=(int *)malloc(f*c*sizeof(int));
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			do{
				k=0;
				n++;
					if(n%l==0){
						k++;
						*(m+f*i+j)=n;
							  }
			  }while(k<=(f*c));
						}
					}
				    
	printf("\nLa matriz es: \n");			    
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%4i",*(m+f*i+j));
		}
			printf("\n\n");
	}	
	
free(m);
return 0;			    
}
