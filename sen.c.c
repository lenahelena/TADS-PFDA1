/*--------------------------------------------------------------
# Fun��o do Programa: Programa de Valida��o de Senha
# Autora: Helena Brito
# Atualiza��o: 20/10/2020
-------------------------------------------------------------*/ 

#include  <stdio.h>
#include  <stdlib.h>
#include  <locale.h>

/* Vari�veis globais */
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
    
	/* Verificar se a senha fornecida est� correta */
		if ( d1 == '1' && d2 == '3' &&  d3 == '1' &&  d4 == '0' )
		{   /* Se a senha estiver certa, mostra o menu */
			system ("cls");
			printf ("======================\n");
			printf ("     a = saldo        \n");
			printf ("     b = depósito     \n");
			printf ("     c = pagamento    \n");
			printf ("     d = transferência\n");
			printf ("     e = sair         \n");
			printf ("======================\n");
			/* Captura a escolha do usuário */
			escolha = getche();
			/* Analisar o que foi escolhido */
			switch ( escolha )
			{
				case 'a': printf ("\nOpera��o: saldo"); 			break;
				case 'b': printf ("\nOpera��o: dep�sito"); 			break;
				case 'c': printf ("\nOpera��o: pagamento"); 		break;
				case 'd': printf ("\nOpera��o: transferência"); 	break;
				case 'e': exit(0); 									break;
				default : printf ("\nOp��o inv�lida");
			}
		}
	    else /* Errou a senha!!!!!! */
	    {
	    	system ("cls"); /* limpa a tela */
	    	printf ("\nSenha Inv�lida!");
	    	printf ("\nVoc� tem %i tentativas.", tentativas );
	    	printf ("\n\n\n");
	    	getch();
		}
  	}
	while ( !( d1 == '1' && d2 == '3' &&  d3 == '1' &&  d4 == '0' )
           &&
           tentativas > 0);

  return(0);
}
