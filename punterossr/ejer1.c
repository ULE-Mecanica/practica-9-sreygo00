#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,t=0;
	int min;
	int *v;
	
	printf("\nIntroduce el numero de posiciones del vector: ");
	scanf("%i",&n);
	v=(int *)malloc(n*sizeof(int));

do{
	printf("\nIntroduce un numero: ");
	scanf("%i",&*(v+t));
	t++;
}while(t<n);

	

	min=*(v+0);
	for(i=1;i<n;i++){
		if(*(v+i)<min){
			min=*(v+i);
			}
			      }

	printf("\nEl minimo es %i.\n",min);

free(v);
return 0;
}

