// # E_Actividad_02
// Actividad_02

#include <stdio.h>
#include <stdlib.h>

struct nodo {
	char dato ;
	struct nodo* ptrSiguiente;
};

typedef struct nodo Nodo ;
typedef Nodo * ptrNodo ;

char funcion(ptrNodo *ptrCabeza, ptrNodo *ptrTalon)
{
	char valor;
	ptrNodo temPtr;
	
	valor  = (*ptrCabeza)->ptrdato;
	temPtr = *ptrCabeza;
	*ptrCabeza = (*ptrCabeza)->ptrSiguiente;
	
	if(*ptrCabeza == NULL)*ptrTalon = NULL;
	
	free(tempPtr);
	return valor;
}
