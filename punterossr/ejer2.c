#include <stdio.h>
#include <stdlib.h>
int main()
{

	int fil,col,suma=0;
	int *m,i,j,t=0;
	
	printf("\nIntroduce el numero de filas: ");
	scanf("%i",&fil);

	printf("\nIntroduce el numero de columnas: ");
	scanf("%i",&col);
	
	m=(int *)malloc(fil*col*sizeof(int));

	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\nIntroduce los valores de la matriz %ix%i: ",fil,col);
			scanf("%4i",&*(m+fil*i+j));
			}
				}
	printf("\nLa matriz es:\n");	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
                        suma=suma+(*(m+fil*i+j));
			printf("%i  ",*(m+fil*i+j));
                  	  }
			printf("\n\n");
				  }

	printf("\nLa suma es: %i.\n",suma);

return 0;
}
	
		          

