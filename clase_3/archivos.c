#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <def.h>

int inAbrirArchivo(FILE *fp,char *szNombreArchivo, char *szModo)
{
	
	fp=fopen(szNombreArchivo, szModo);
	if(fp==NULL)
		return FALSE;
	else
		return TRUE;
}

void voCerrarArchivo(FILE* fp)
{
	fclose(fp);
}

int inLeerArchivo(char *szTextoALeer)
{
	return 0;
}

int inEscribirArchivo(char *szTextoAEscribir)
{
	return 0;
}

int inEscribirArchivoPorLinea(char *szTextoAEscribir)
{
	return 0;
}






