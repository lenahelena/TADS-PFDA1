/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variáveis de memória */
char op;

/* Corpo do programa */
int   main  ()
{
    system("cls");
	setlocale (LC_ALL, "");

	/* Construção do Menu pedido */
	printf ("===================\n");
	printf ("      MENU\n");
	printf ("===================\n\n");
	printf ("1. Pedido");
	printf ("\n\nQual será o pedido?\n\n");
	fflush (stdin); /*limpa o buffer de memória */	
	/*getche Captura a opção escolhida e mostra, já o getch não mostra o caractere capturado*/

	getche(); /* fica aguardando a inclusão do caracter e o captura para a memória */
	
	system("cls");
	
	printf ("Voltando ao Master");
	getch();
	
	system("cls");
	
	system ("master");
	/*criada para o sistema não voltar de uma vez, eu ter que apertar algo para sim ele voltar */
	getch();
	
	return 0;
}
	
	
