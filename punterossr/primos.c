/*Realice un programa primos.c en lenguaje C que lea dos números enteros
que especifiquen el número de filas y el número de columnas de una matriz.
La función main reservará un puntero a una matriz de enteros de tamaño
filas x columnas. A continuación deberá inicializar la matriz con los primeros
filas x columnas números primos y mostrará la matriz por pantalla. */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int f,c,n,k=0,i,j;
	int *m;
	printf("\nIntroduce el número de filas: ");
	scanf("%i",&f);
	
	printf("\nIntroduce el número de columnas: ");
	scanf("%i",&c);
	
	m=(int *)malloc(f*c*sizeof(int));
	
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("\nIntroduce valores primos para rellenar la matriz de %i filas y %i columnas: ",f,c);
		do{	
			for(n=*(m+f*i+j);n>1;n++){
				if(n%(*(m+f*i+j))==0){						//El fallo está en este bucle pero no lo encuentro; compila pero 
					scanf("%i",&*(m+f*i+j));				//no ejecuta correctamente. 	
					k++;
						  }
									  }
		  }while(k<=(f*c));
					    }
				     }
	int r,l;				
	printf("\nLa matriz es: \n");
	for(r=0;r<f;r++){						//r:filas;l:columnas
		for(l=0;l<c;l++){
			printf("%i  ",*(m+f*i+j));
		}
			printf("\n\n");
	}	
free(m);				
return 0;	
}
