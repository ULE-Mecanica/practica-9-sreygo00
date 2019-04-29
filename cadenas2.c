/*Realice un programa que lea una cadena de tantos caracteres como indique el usuario
y llame a una funcion quitaespacios que elimine todos los espacios en blanco de la cadena
y los almacene en otra.La función main imprimirá la cadena resultante y la definicion de la
funcion será: void quitaespacios(char *cadena,char *cadenasin)*/
#include <stdio.h>
#include <stdlib.h>
void quitaespacios(char *cad,char *cadsin);
int main()
{
	char *cad,*cadsin,vaciar;
	int n;
	
	printf("\nIntroduce el numero de elementos de la cadena: ");
	scanf("%i",&n);
	
	cad=(char *)malloc(n*sizeof(char));
	cadsin=(char *)malloc(n*sizeof(char));
	
	printf("\nIntroduce la cadena: ");
	
	while((vaciar = getchar() != EOF && vaciar != '\n'));
	
	fgets(cad,n-1,stdin);
	
	quitaespacios(cad,cadsin);
	
	printf("\nLa cadena es: %i.\n",cadsin);
	
return 0;	
}

				void quitaespacios(char *cad,char *cadsin){
					int i=0,j=0;
					
					while(*(cad+i)!='\0'){
						if(*(cad+i)!= ' '){
							*(cadsin+j)=*(cad+i);
							j++;
						}
						i++;
					}
				}
