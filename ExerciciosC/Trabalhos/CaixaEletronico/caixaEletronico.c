#include <stdio.h>
#include <stdlib.h>	

main(){
	
	int quantnotas[6][2];
	int i,notassacadas,valordisp=0,aux=0,quant;

	for(i = 0; i<6; i++){
		quantnotas[i][0] = 10;
	}

	quantnotas[0][1] = 100;
	quantnotas[1][1] = 50;
	quantnotas[2][1] = 20;
	quantnotas[3][1] = 10;
	quantnotas[4][1] = 5;
	quantnotas[5][1] = 2;

	for(i =0; i<6; i++){
		valordisp = quantnotas[i][0] * quantnotas[i][1];
		aux = valordisp + aux;
	}
	
	printf("===== Valor disponível em caixa: %d =====\n",aux);

	printf("===== Digite o Valor a ser sacado: ");
        scanf("%d",&quant);

	if(quant <= aux){
	
	
		if(quant >= 100){

			while(quant >= 100 && quantnotas[0][0] != 0){
				quant = quant - 100;
				quantnotas[0][0]--;
 			}	

		}

		 if(quant >= 50){

			while(quant >= 50 && quantnotas[1][0] != 0){
				quant = quant - 50;
				quantnotas[1][0]--;
			}
		}

		 if(quant >= 20){
		
			while(quant >= 20 && quantnotas[2][0] != 0){
                	        quant = quant - 20;
				quantnotas[2][0]--;
                	}
		}

	 	if(quant >= 10){

                	while(quant >= 10 && quantnotas[3][0] != 0){
                        	quant = quant - 10;
				quantnotas[3][0]--;
               		 }
		}

		 if(quant >= 5){

               		 while(quant >= 5 && quantnotas[4][0] != 0){
                       		 quant = quant - 5;
			 	 quantnotas[4][0]--;
                	}
		}

		 if(quant >= 2){

                	while(quant >= 2 && quantnotas[5][0] != 0){
                       	        quant = quant - 2;
				quantnotas[5][0]--;
               		 }

	   	} 

		printf("======= Saque efetuado com sucesso =======\n");
	
		for(i = 0;i<6;i++){
		
			if(quantnotas[i][0] != 10){

				notassacadas = 10 - quantnotas[i][0];

				printf("===== Foram sacadas: %d nota(s) de %d =====\n", notassacadas,quantnotas[i][1]);
			}
		} 
	}else{

		printf("======= Não é possível sacar quantia indisponível =======\n");
	}
}

