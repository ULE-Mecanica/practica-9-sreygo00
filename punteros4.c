/*Realice un programa media.c en lenguaje C que lea un vector de n enteros y
contenga una función que calcula el valor medio de dicho vector. */

#include <stdio.h>
#include <stdlib.h>
void media(float *v,int n);
int main()
{
	int n,i;
	float *v;
	
	printf("\nIntroduce el numero de elementos del vector: ");
	scanf("%i",&n);
	
	v=(float *)malloc(n*sizeof(float));
	
	for(i=0;i<n;i++){
		printf("\nIntroduce los elementos del vector: ");
		scanf("%f",&*(v+i));
	}
	
	media(v,n);
	
return 0;	
}

		void media(float *v,int n){
			float media=0,suma=0;
			int i;
			for(i=0;i<n;i++){
				suma=suma+(*(v+i));
			}
		media=suma/n;	
			
		printf("\nLa media es %f.\n",media);	
		}
