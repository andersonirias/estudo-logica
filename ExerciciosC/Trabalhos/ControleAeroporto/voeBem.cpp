#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//===================================================
//===================================================
//==============Parte do Avião=======================
struct aviao{
	int cod,velocidade,altitude,motor;
	float comprimento,altura;
	char modelo[5],fabricante[10];
};
//===================================================
//===================================================
//===============Parte do Voo========================
struct voo{
	int numvoo,passageiros;
	char portosaida[10], portochegada[10], rota[20];
	float tempovoo,horvoo;
};
struct no{
	voo viagem;
	no *proximo;
};
no *cadastrarVoo(no *nos){
	no *noNovo;
	noNovo=(no*)malloc(sizeof(no));

	printf("=====Digite o o numero do Voo: ");
	scanf("%d",&noNovo->viagem.numvoo);
	printf("=====Digite o horario do Voo: ");
	scanf("%f",&noNovo->viagem.horvoo);
	printf("=====Digite a quantidade de lugares disponviveis: ");
	scanf("%d",&noNovo->viagem.passageiros);
	printf("=====Digite o aeroporto de saida: ");
	gets(noNovo->viagem.portosaida); 
	printf("=====Digite o aeroporto de chegada: ");
	gets(noNovo->viagem.portochegada);
	printf("=====Digite a rota: ");
	gets(noNovo->viagem.portosaida); 
	printf("=====Digite o tempo do Voo: ");
	scanf("%f",&noNovo->viagem.tempovoo);
	noNovo->proximo = nos;
	return noNovo;
}
void verificarVoo(no *nos){
	no *l;
	l=nos;
	if(l == NULL){
		printf("Nao e possivel cadastrar passagem pois nao existe voo cadastrado ");
	}
	
	
}
void pesquisarVoo(no *nos){
	no *l;
	int nunVoo;
	
	printf("Digite o numero do Voo: ");
	scanf("%d",&nunVoo);
	
	for(l=nos;l!=NULL;l=l->proximo){
		if(nunVoo==l->viagem.numvoo)
			printf("Numero do voo: %d \nHorario do voo: %f.2 \nQuantidade de lugares: %d \nTempo de Voo: %f.2\n\n\n", l->viagem.numvoo,l->viagem.horvoo,l->viagem.passageiros,l->viagem.tempovoo);
		}

	system("pause");	
}

//================================================
//================================================
//================Parte da Passagem===============
struct passagem{
	
	int num_pass,num_voo,data_emb,pt_emb;
	float hor_emb;
};
struct no_pass{
	
	passagem bilhete;
	no_pass *proximo;
};
no_pass *cadastraPassagem(no_pass *noP){
	
	no_pass *noNovo;
	noNovo = (no_pass*)malloc(sizeof(no_pass));
	printf("Numero da Passagem: ");
	scanf("%d",&noNovo->bilhete.num_pass);
	printf("Numero do Voo: ");
	scanf("%d",&noNovo->bilhete.num_voo);
	printf("Data de Embarque: ");
	scanf("%d",&noNovo->bilhete.data_emb);
	printf("Horario do embarque: ");
	scanf("%f",&noNovo->bilhete.hor_emb);
	printf("Portao de embarque: ");
	scanf("%d",&noNovo->bilhete.pt_emb);
	noNovo->proximo = noP;
	return noNovo;
}
void consultaPassagem(no_pass *noP){
	no_pass *l;
	int busca;
	
	printf("Digite o numero da passagem: ");
	scanf("%d",&busca);
	
	for(l = noP; l != NULL; l= l->proximo){
		
		if(busca == l->bilhete.num_pass){
			
			printf("\nNumero Passagem: %d\n",l->bilhete.num_pass);
			printf("Numero do Voo: %d\n",l->bilhete.num_voo);
			printf("Portao de embarque: %d\n",l->bilhete.pt_emb);
			printf("Data de Embarque: %d\n",l->bilhete.data_emb);
			printf("Horario do Embarque: %f\n",l->bilhete.hor_emb);
			
		}else{
				printf("Passagem não encontrada \n ");
		}
	}
}

//=======================================
//=======================================
// Menu Principal do Programa
int menuPrincipal(){
	
	int op;
	
	printf("1 - Menu Voo\n");
	printf("2 - Menu Passagem\n");
	printf("0 - Encerrar Programa\n");
	printf("OPCAO: ");
	scanf("%d",&op);
	return op;
}

//=======================================
//=======================================
// Menu do Voo
int menuVoo(){
	
	int op;
		
	printf("1 - Cadastrar Voo\n");
	printf("2 - Consultar Voo\n");
	printf("0 - Voltar ao Menu Principal\n");
	printf("OPCAO: ");
	scanf("%d",&op);
	return op;
}

//=======================================
//=======================================
// Menu de Passagens
int menuPassagem(){
	
	int op;
	
	printf("1 - Cadastrar Passagem\n");
	printf("2 - Consultar Passagem\n");
	printf("0 - Sair\n");
	printf("OPCAO: ");
	scanf("%d",&op);
	return op;
}
	
//============================================
//============================================
//Função Principal
main(){
	int op_pass,op_voo,op_prin;
	int opcao;
	no *viagens;
	viagens=NULL;
	no_pass *Passagens;
	Passagens = NULL;
	
	do{
		
		system("cls");
		op_prin = menuPrincipal();
		
		if(op_prin == 1){
			
			system("cls");
			op_voo = menuVoo();
	
			if(op_voo == 1){
			
				opcao = 1;
				while(opcao == 1){
					
					system("cls");
					viagens = cadastrarVoo(viagens);
					printf("Deseja cadastrar novo Voo ? 1 - Sim | 0 - Nao ");
					scanf("%d",&opcao);
				}
				
				system("cls");
				menuVoo();
				
			}else if(op_voo == 2){
				
				opcao = 1;
				while(opcao == 1){
					
					system("cls");
					pesquisarVoo(viagens);
					printf("Deseja realizar uma nova pesquisa? 1 - Sim | 1 - Nao ");
					scanf("%d",&opcao);
				}
					
				system("cls");
				menuVoo();
				
			}else if(op_voo == 0){
				
				system("cls");
				menuPrincipal();
				
			}else{

				system("cls");
				menuVoo();
				
			}
			
			
		}else if(op_prin == 2){
			
			system("cls");
			op_pass = menuPassagem();
			
			if(op_pass == 1){
				
				system("cls");
				verificarVoo(viagens);
				Passagens = cadastraPassagem(Passagens);
				
			}else if(op_pass == 2){
				
				opcao = 's';
				while(opcao == 's' || opcao =='S'){
					
					system("cls");
					consultaPassagem(Passagens);
					printf("Deseja realizar uma nova pesquisa? S - Sim | N - Nao");
					scanf("%c",&opcao);
				}
				
				system("cls");
				op_voo = menuVoo();
			
			}else{
				
				printf("Opcao nao existente");
			}
			
			
		}
	}while(op_prin != 0);
}
