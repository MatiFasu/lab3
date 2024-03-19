#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <funciones.h>
#include <definiciones.h>


int main(int argc, char* argv[]) {
	
	int cont;

	char buffer[20];
	
	/*printf("El valor de argc es: %d", argc);

	for(cont=0; cont<argc; cont++) {
		printf("\nEl argumento %d es: %s", cont, argv[cont]);
	} */

	

	memset(buffer, 'a', sizeof(char) * 5);
	memset(buffer+5, 'b', sizeof(char) * 5);
	memset(buffer+10, 'c', sizeof(char) * 5);
	memset(buffer+15, 'd', sizeof(char) * 5);
	
	for(cont=0; cont<20; cont++)
		printf("%c", buffer[cont]);

	puts("\n");

	memset(buffer, '0x00', 15);
	
	for(cont=0; cont<20; cont++)
		printf("%c", buffer[cont]);


	printf("\n");	

	return 0;
}
