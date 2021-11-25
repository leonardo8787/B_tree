#ifndef TAB_H_INCLUDED
#define TAB_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct AB{
	int n_chaves;
	int *chaves;
	struct AB **filhos;
}TAB;

void iNP( TAB*, TAB*, int ); //  Insere na Página
void efetuaInsercao( TAB**, TAB**, int*, int*, int, int );
void insercao( TAB**, int, int );
TAB* novaPagina(int);

void imprimir( TAB*, int );
TAB* busca( TAB*, int );
void reconstitui( TAB**, TAB*, int*, int, int );
void remocao( TAB**, int, int );
void antecessor( TAB*, TAB*, int*, int, int );
void efetuaRemocao( TAB**, int*, int, int);

#endif // TAB_H_INCLUDED
