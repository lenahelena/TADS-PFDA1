/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�veis de mem�ria */
char op;

/* Corpo do programa */
int  main ()
{
    setlocale (LC_ALL, "");

	/* Constru��o do Menu inicial */
	printf ("===================\n");
	printf ("      MENU\n");
	printf ("===================\n\n");
	printf ("1. Pedido\n");
	printf ("2. Pagamento\n");
	printf ("3. Entrega\n");
	printf ("4. Sair\n\n\n");
	printf ("Qual a sua op��o?  ");
	fflush (stdin); /*limpa o buffer de mem�ria */
	
	/*getche Captura a op��o escolhida e mostra, j� o getch n�o mostra o caractere capturado*/

	op = getche(); /* fica aguardando a inclus�o do caracter e o captura para a mem�ria */
	
	if (op == '1')
		system ("pedido");
				
	if (op == '2')
		system ("pagamento");
		
	if (op == '3')
		system ("entrega");
	
	if (op == '4')
	{
		printf("\n\nAgradecemos a prefer�ncia!");
	}
	
	return(0);
		
}
