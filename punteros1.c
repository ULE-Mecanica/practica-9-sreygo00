/*Realice un programa punteros1D.c en lenguaje C que lea un vector de n
enteros e indique cuál es el valor mínimo del vector imprimiéndolo por
pantalla. */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i=0,t;
	int *v;
	
	printf("\nIntroduce el numero de componentes del vector: ");
	scanf("%d",&n);
	
	v=(int *)malloc(n*sizeof(int));
	
	do{
	printf("\nIntroduce los valores del vector: ");
	scanf("%d",v+i);
	i++;
	}while(i<n);
	
	int min=*(v+0);
	for(t=1;t<n;t++){
		if(*(v+t)<min){
		min=*(v+t);
				  }
		}
	printf("\nEl minimo es: %d.\n",min);
	
free(v);
return 0;	
}
