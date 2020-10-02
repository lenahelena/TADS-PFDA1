/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variáveis de memória */
char op;

/* Corpo do programa */
int main ()
{
    setlocale (LC_ALL, "");

	/* Construção do Menu de Pagamento */
	printf ("===================\n");
	printf ("      MENU\n");
	printf ("===================\n\n");
	printf ("3. Pagamento\n");
	
	/*chamar soma do arquivo pedido e mostrar aqui */
	printf ("O valor do seu pedido será de x reais\n\n"); 
	printf ("\n\nComo será a forma de pagamento?\n\n");
	printf ("Débito ou Crédito?\n\n");
	/*limpa o buffer de memória, a entrada de dados esperando vazio */
	fflush (stdin); 	
	
	/*getche Captura a opção escolhida e mostra, já o getch não mostra o caractere capturado*/

	/* fica aguardando a inclusão do caracter e o captura para a memória */
	getche(); 
	
	/* confirmar como chamar a variável débito/crédito se é 'strings	
	if (op == '1')
		system ("pedido");
		
	if (op == '2')
		system ("pagamento"); */
	
	/*função para limpar a tela toda */
	system("cls");
	printf ("Voltando ao Master");
	getch();
	
	system("cls");
	
	system ("master");
	/*criada para o sistema não voltar de uma vez, eu ter que apertar algo para sim ele voltar */
	getch();
	
	return 0;
}
	
