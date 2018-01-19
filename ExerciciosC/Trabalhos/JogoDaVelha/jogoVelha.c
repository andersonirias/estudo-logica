#include <stdio.h>
#include <stdlib.h>
 
 char velha[9];
 char jogador1, jogador2;
 int jogadas=0;

 void limparvelha()
 {
 	int x;
 	for(x=0;x<9;x++)
 	{
 		velha[x]=' '; 		
	 }
 }
 
 void imprimirvelha()
 {
 	int i;
 	for(i=0;i<9;i++){
 		
 		if(i== 3 || i==6){
 			printf("\n");
		 }
 		
 		printf("[%c]",velha[i]);
 	
	 }	
 }
 
 void verganhador()
 {
 	
 
	 
 	if(velha[0] == velha[1] && velha[0] == velha[2])
	 {
	 	if(velha[0] == ' ' || velha[1]==' ' || velha[2]==' '){
		 }else{
		 
 		printf("\nO (%c) foi o vencedor", velha[0]);
 		exit(0);
 	}
	 }
	 else if(velha[3] == velha[4] && velha[3] == velha[5])
	 {
	 	if(velha[3] == ' ' || velha[4]==' ' || velha[5]==' '){
		 }else{
	 	printf("\nO (%c) foi o vencedor", velha[3]);
	 	exit(0);
	 }
	 }
	 else if(velha[6] == velha[7] && velha[6] == velha[8])
	 {
	 	if(velha[6] == ' ' || velha[7]==' ' || velha[8]==' '){
		 }else{
	 	printf("\nO (%c) foi o vencedor", velha[6]);
	 	exit(0);
	 }
	 }
	 else if(velha[0] == velha[3] && velha[0] == velha[6])
	 {
	 	if(velha[0] == ' ' || velha[3]==' ' || velha[6]==' '){
		 }else{
 		printf("\nO (%c) foi o vencedor", velha[0]);
 		exit(0);
 	}
	 }
	 else if(velha[1] == velha[4] && velha[1] == velha[7])
	 {
	 	if(velha[1] == ' ' || velha[4]==' ' || velha[7]==' '){
		 }else{
 		printf("\nO (%c) foi o vencedor", velha[1]);
 		exit(0);
 	}
	 }
	 else if(velha[2] == velha[5] && velha[2] == velha[8])
	 {
	 	if(velha[2] == ' ' || velha[5]==' ' || velha[8]==' '){
		 }else{
 		printf("\nO (%c) foi o vencedor", velha[2]);
 		exit(0);
 	}
	 }
	 else if(velha[0] == velha[4] && velha[0] == velha[8])
	 {
	 	if(velha[0] == ' ' || velha[4]==' ' || velha[8]==' '){
		 }else{
 		printf("\nO (%c) foi o vencedor", velha[0]);
 		exit(0);
 	}
	 }
	 else if(velha[2] == velha[4] && velha[2] == velha[6])
	 {
	 if(velha[2] == ' ' || velha[4]==' ' || velha[6]==' '){
		 }else
	 {
 		printf("\nO (%c) foi o vencedor", velha[2]);
 		exit(0);
 	}
	 }

	 
 }

  main()
 { 
 	
 	int posicao;
 	int vencedor=0, l=0,m=0;
 	
	
 	printf("Jogo da velha \n\n");
  	
 	do{
	 
	printf("\n\nJogador 1 escolha (x) ou (o): ");
 	scanf("%c", &jogador1);
	 	
 	if(jogador1=='x'){
 		printf("\nJogador 1 e (x) e o jogador 2 e (o) \n\n");
 		jogador1='x';
 		jogador2='o';
 		
	 }else if(jogador1=='o'){
	 	printf("\nJogador 1 e (o) e o jogador 2 e (x) \n\n");
 		jogador1='o';
 		jogador2='x';
 		
	 }else{
	 	system("cls");
	 	printf("\n\nEscolha um simbolo valido");
	 	
	 }
    }while(jogador1 != 'x' && jogador1 != 'o');
		
		system("cls");
		limparvelha();
 	    
 	    
	printf("\n\nO Jogador 1 comeca \n\n");
	printf("Abaixo as posicoes para as jogadas \n\n");
 	
	 for(m=0;m<9;m++){
 		
 		if(m== 3 || m==6){
 			printf("\n");
		 }
 		
 		printf("[%d]",m);
 	
	 }	
	 
	 	limparvelha();
	while(vencedor==0)
	{
		
	do{

	if(jogadas==8){
		printf("\n\nFim de jogo Deu velha");
		exit(0);
	}else{
		l=0;
	 printf("\n\nJogador 1 digite a posicao da jogada: ");
	 scanf("%i", &posicao);
	 	
	 

	if(posicao>8){
		printf("\n\nPosicao inexistente! Digite uma posicao valida");
		l++;

	}else if(velha[posicao] == ' '){
		
		velha[posicao] = jogador1;
		imprimirvelha();
		verganhador();
		jogadas++;
		l=0;
	}else{
		printf("\n\nPosicao ja jogada! Digite uma posicao que esteja vazia");
		l++;
	}
}
		}while(l != 0);
		
	do{
		l = 0;
	printf("\n\nJogador 2 digite a posicao da jogada: ");
	scanf("%i", &posicao);
	
	if(posicao>8){
		printf("\n\nPosicao inexistente! Digite uma posicao valida");
		l++;
	}
	else if(velha[posicao] == ' '){
			
		velha[posicao] = jogador2;
		imprimirvelha();
	        verganhador();
		jogadas++;
		l=0;
	}else{
		printf("\n\nPosicao ja jogada! Digite uma posicao que esteja vazia");
		l++;
	}
		}while(l !=0);    
			
 	}
 
 	system("pause");
	
 }
