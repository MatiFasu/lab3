#ifndef _ARCHIVOS
#define _ARCHIVOS

int inAbrirArchivo(char *szNombreArchivo, char *szModo);

void voCerrarArchivo(FILE* fp);

int inLeerArchivo(char *szTextoALeer);

int inEscribirArchivo(char *szTextoAEscribir);

int inEscribirArchivoPorLinea(char *szTextoAEscribir)

#endif
