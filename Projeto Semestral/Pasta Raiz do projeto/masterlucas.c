/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


/*Variáveis*/
char op;


/*Corpo do programa*/
int main (){
	
	/*COnstrução do menu*/
	inicio:
	system ("cls");		
	printf("=====================\n");
	printf("       M E N U         ");
	printf("=====================\n");
	printf("       1.Pedido      \n");
	printf("       2.Pague       \n");
	printf("       3.leve        \n");
	printf("       S.Sair        \n");
	printf("=====================\n");
	printf(" Sua escolha: ");
	fflush(stdin);
	/*getche Captura a opção escolhida*/
	op = getche();
	/*Chama o respectivo programa-filho*/
	if(op == '1'){
		system ("pedido.exe");
	}
	if(op == '2'){
		system("pague.exe");
	}
	if(op == '3'){
		system("leve.exe");
	}
	if(op == 's'){
		exit (0);
	}
	if ()
	system("color e0");
	system("cls");
	printf("\n\nVoltando ao master");
	getch();
	goto inicio;
	
	
		
	return 0;
}


