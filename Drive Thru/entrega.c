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
    setlocale (LC_ALL, "");

	/* Constru��o do Menu inicial */
	printf ("===================\n");
	printf ("      MENU\n");
	printf ("===================\n\n");
	printf ("3. Entrega\n");
	
	getch();
	
	
	system("cls");
	printf ("Voltando ao Master");
	getch();
	
	system("cls");
	
	system ("master");
	/*criada para o sistema n�o voltar de uma vez, eu ter que apertar algo para sim ele voltar */
	getch();
	
	return 0;
	
}

