#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include <funciones.h>
#include <definiciones.h>



int main(int argc, char* argv[]) {
	

	struct Arr ar = crearArreglo();
		
	ar = generarArregloAleatorio(ar, 1, 30);

	imprimirArreglo(ar);
	
	printf("\n");	
	
	liberarArreglo(ar);

	return 0;
}
