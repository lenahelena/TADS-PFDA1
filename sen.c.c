/*--------------------------------------------------------------
# Função do Programa: Programa de Validação de Senha
# Autora: Helena Brito
# Atualização: 20/10/2020
-------------------------------------------------------------*/ 

#include  <stdio.h>
#include  <stdlib.h>
#include  <locale.h>

/* Variáveis globais */
char   d1, d2, d3, d4;
char   escolha;
int    tentativas = 3;

int  main()
{
  setlocale(LC_ALL, "");

	do
  	{
	printf ("Senha: ");
	d1 = getch(); 	printf ("*");
	d2 = getch(); 	printf ("*");
	d3 = getch();   printf ("*");
	d4 = getch();   printf ("*");
    /* Subtrai uma tentativa */
    tentativas = tentativas - 1;
    
	/* Verificar se a senha fornecida está correta */
		if ( d1 == '1' && d2 == '3' &&  d3 == '1' &&  d4 == '0' )
		{   /* Se a senha estiver certa, mostra o menu */
			system ("cls");
			printf ("======================\n");
			printf ("     a = saldo        \n");
			printf ("     b = depÃ³sito     \n");
			printf ("     c = pagamento    \n");
			printf ("     d = transferÃªncia\n");
			printf ("     e = sair         \n");
			printf ("======================\n");
			/* Captura a escolha do usuÃ¡rio */
			escolha = getche();
			/* Analisar o que foi escolhido */
			switch ( escolha )
			{
				case 'a': printf ("\nOperação: saldo"); 			break;
				case 'b': printf ("\nOperação: depósito"); 			break;
				case 'c': printf ("\nOperação: pagamento"); 		break;
				case 'd': printf ("\nOperação: transferÃªncia"); 	break;
				case 'e': exit(0); 									break;
				default : printf ("\nOpção inválida");
			}
		}
	    else /* Errou a senha!!!!!! */
	    {
	    	system ("cls"); /* limpa a tela */
	    	printf ("\nSenha Inválida!");
	    	printf ("\nVocê tem %i tentativas.", tentativas );
	    	printf ("\n\n\n");
	    	getch();
		}
  	}
	while ( !( d1 == '1' && d2 == '3' &&  d3 == '1' &&  d4 == '0' )
           &&
           tentativas > 0);

  return(0);
}
