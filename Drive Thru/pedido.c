/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�veis de mem�ria */
char op;

/* Corpo do programa */
int   main  ()
{
    system("cls");
	setlocale (LC_ALL, "");

	/* Constru��o do Menu pedido */
	printf ("===================\n");
	printf ("      MENU\n");
	printf ("===================\n\n");
	printf ("1. Pedido");
	printf ("\n\nQual ser� o pedido?\n\n");
	fflush (stdin); /*limpa o buffer de mem�ria */	
	/*getche Captura a op��o escolhida e mostra, j� o getch n�o mostra o caractere capturado*/

	getche(); /* fica aguardando a inclus�o do caracter e o captura para a mem�ria */
	
	system("cls");
	
	printf ("Voltando ao Master");
	getch();
	
	system("cls");
	
	system ("master");
	/*criada para o sistema n�o voltar de uma vez, eu ter que apertar algo para sim ele voltar */
	getch();
	
	return 0;
}
	
	
