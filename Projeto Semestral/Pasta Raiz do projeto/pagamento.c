/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�veis de mem�ria */
char op;

/* Corpo do programa */
int main ()
{
    setlocale (LC_ALL, "");

	/* Constru��o do Menu de Pagamento */
	printf ("===================\n");
	printf ("      MENU\n");
	printf ("===================\n\n");
	printf ("3. Pagamento\n");
	
	/*chamar soma do arquivo pedido e mostrar aqui */
	printf ("O valor do seu pedido ser� de x reais\n\n"); 
	printf ("\n\nComo ser� a forma de pagamento?\n\n");
	printf ("D�bito ou Cr�dito?\n\n");
	/*limpa o buffer de mem�ria, a entrada de dados esperando vazio */
	fflush (stdin); 	
	
	/*getche Captura a op��o escolhida e mostra, j� o getch n�o mostra o caractere capturado*/

	/* fica aguardando a inclus�o do caracter e o captura para a mem�ria */
	getche(); 
	
	/* confirmar como chamar a vari�vel d�bito/cr�dito se � 'strings	
	if (op == '1')
		system ("pedido");
		
	if (op == '2')
		system ("pagamento"); */
	
	/*fun��o para limpar a tela toda */
	system("cls");
	printf ("Voltando ao Master");
	getch();
	
	system("cls");
	
	system ("master");
	/*criada para o sistema n�o voltar de uma vez, eu ter que apertar algo para sim ele voltar */
	getch();
	
	return 0;
}
	
