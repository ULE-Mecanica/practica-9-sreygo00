/*Realice un programa que lea una cadena de por lo menos 100 caracteres e imprima por pantalla: 
	-Su longitud.
	- Si es igual a la cadena compara.
	- Concat�nale la cadena a�adida y mu�strala por pantalla. 
*/

#include <stdio.h>
#include <string.h>
int main()
{
	char cad[100];
	
	
	printf("\nIntroduce una cadena: ");
	fgets(cad,100,stdin);
	
	int tam=strlen(cad);
	
	printf("\nEl tamanio de la cadena es: %i.\n",tam);
	
	if(strcmp(cad,"compara\n")==0){
		printf("\nLas cadenas son iguales.\n");
	}else{
		printf("\nLas cadenas son diferentes.\n");
	}
	
	strcat(cad,"a�adida\n");
	printf("\n%s.\n",cad);
	
return 0;	
}	
