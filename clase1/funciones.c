#include <stdlib.h>
#include <stdio.h>
#include <funciones.h>
#include <definiciones.h>

int esPrimo(int n) {
	
	int i;

	if(n<=1) {
		return FALSE;
	}

	for(i=2; i*i <= n; i++) {
		if(n%i==0) {
			return FALSE;
		}
	}
	
	return TRUE;
}
