/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variáveis de memória */
char op;

/* Corpo do programa */
int  main ()
{
    setlocale (LC_ALL, "");

	/* Construção do Menu inicial */
	printf ("===================\n");
	printf ("      MENU\n");
	printf ("===================\n\n");
	printf ("1. Pedido\n");
	printf ("2. Pagamento\n");
	printf ("3. Entrega\n");
	printf ("4. Sair\n\n\n");
	printf ("Qual a sua opção?  ");
	fflush (stdin); /*limpa o buffer de memória */
	
	/*getche Captura a opção escolhida e mostra, já o getch não mostra o caractere capturado*/

	op = getche(); /* fica aguardando a inclusão do caracter e o captura para a memória */
	
	if (op == '1')
		system ("pedido");
				
	if (op == '2')
		system ("pagamento");
		
	if (op == '3')
		system ("entrega");
	
	if (op == '4')
	{
		printf("\n\nAgradecemos a preferência!");
	}
	
	return(0);
		
}
