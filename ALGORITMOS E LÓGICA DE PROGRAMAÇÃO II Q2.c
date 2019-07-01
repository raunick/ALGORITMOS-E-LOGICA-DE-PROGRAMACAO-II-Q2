// QUESTAO 2 - Crie um programa em linguagem C.
// Disciplina : [ALGORITMOS E LÓGICA DE PROGRAMAÇÃO II Q2]
// Autor(a) : Raunick Vileforte Vieira Generoso
// Data: 30/06/2019
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
//a) Declarar duas constantes, sendo LINHA e COLUNA, e armazene os valores 4 e 6 respectivamente. Onde a constante LINHA é responsável pelas semana e a constante COLUNA é responsável pelos dias da semana.
#define LINHA 2
#define COLUNA 2

  //Entrada de Variaveis
	float matriz[LINHA][COLUNA];
	float n,a,MEDIA,TOTAL;
 	int l,c,s,d,op;
  	
  
  
  
  	
	void preencherVendas()
	{
		setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
		//b) Desenvolver uma função que preencha uma matriz com os valores de venda diários de uma empresa de revenda de automóvel. Esses valores devem ser informados pelo usuário. A dimensão da matriz se dá pelo uso das constantes, LINHA e COLUNA. 
		printf("\n\n===============================================================\n");
	    printf(	   "--------------------- PREENCHENDO VENDAS ----------------------");
	    printf("\n===============================================================\n\n");
	    for(l=0;l<LINHA;l++){
	      for(c=0;c<COLUNA;c++){
	        s=l+1;
	        d=c+1;
	        printf("Digite o total de vendas do %dº dia da %dº semana ...... R$",d,s);
	        //habilita o dinheiro em R$ 00,00. Se for usar "." a inves de "," desabilite a linha 24 para evitar bugs.;]
			scanf("%f",&matriz[l][c]);
	      }
	    }
	    printf("\n\n===============================================================\n");
	    printf("===============================================================\n");
	    printf("***************************************************************");
	    
	    printf("\n\n===============================================================\n");
	    printf(	   "----------------------- VENDAS SALVAS -------------------------");
	    printf("\n===============================================================\n\n");
	}
	
	void exibirVendas()
	{
    	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português 
	    //c) Desenvolver uma função que imprima os valores diários de venda do mês.
	    printf("\n\n===============================================================\n");
	    printf(    "----------------------- EXIBINDO VENDAS -----------------------");
	    printf("\n===============================================================\n\n");
	    
	    for(l=0;l<LINHA;l++){
	      for(c=0;c<COLUNA;c++){
	        s=l+1;
	        d=c+1;
	        printf("Total de vendas %dº dia da %dº semana ................. R$ %.2f\n",d,s,matriz[l][c]);
	        
	      }
	    }
	    for(l=0;l<LINHA;l++){
	      for(c=0;c<COLUNA;c++){
	        n=n+matriz[l][c];
	        TOTAL=n;
	 
	      }
	    }
	    
	    printf("---------------------------------------------------------------\n");
	    printf("Total do mês ........................................ R$ %.2f\n",TOTAL);
	    printf("\n\n===============================================================\n");
	    printf("===============================================================\n");
	    printf("***************************************************************");
	    TOTAL=0;
	    n=0;
	}
	
	void mediaVendas()
	{
		setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português 
		//d) Desenvolver uma função que calcule a média de vendas do mês.
	    printf("\n\n===============================================================\n");
	    printf("---------------------- MÉDIA DAS VENDAS -----------------------");
	    printf("\n===============================================================\n\n");

	    for(l=0;l<LINHA;l++){
	      for(c=0;c<COLUNA;c++){
	        n=n+matriz[l][c];
	        a=LINHA*COLUNA;
	        MEDIA=n/a;
	 
	      }
	    }
	   	printf(  "A média do mês ....................................... R$%.2f",MEDIA);
	    MEDIA=0;
	    n=0;
	    a=0;
	    printf("\n\n===============================================================\n");
	    printf("===============================================================\n");
	    printf("***************************************************************");
	}
	
	void sair()
	{
		printf("\n\n===============================\n");
	    printf("----- PROGRAMA FINALIZADO -----");
	    printf("\n===============================\n");
	    printf("*******************************");
	}
	
int main(void)
{
 	//cria e zera a tabela
	    for(l=0;l<LINHA;l++){
	      for(c=0;c<COLUNA;c++){
	      matriz[l][c]= 0.00;
	      }
	    }
	    
	    
	    
    //e) Criar um menu que fique repetindo as opções: Preencher Vendas, Exibir as Vendas, Média de Vendas e por fim Sair.
    do{
    	
		printf("\n\nESCOLHA UMA ALTERNATIVA:\n\n");
		printf("[1]Preencher vendas\n");
		printf("[2]Exibir vendas\n");
		printf("[3]Media vendas\n");
		printf("[0]Sair\n");
		printf("\nALTERNATIVA ---> ");
		scanf("%d",&op);
		//Limpa tela		
		system("cls");
		
		switch(op){
		    case 1:
		    	preencherVendas ();
	    	break;
	    	case 2:
	    		exibirVendas ();
	    	break;
	    	case 3:
	    		mediaVendas ();
	    	break;
	    	case 0:
	    		sair ();
	    	break;
	    	default:
		    printf("\n\n================================\n");
		    printf("----- ALTERNATIVA INVALIDA -----");
		    printf("\n================================\n");
		    printf("********************************");
		}
  	}while(op!=0);
    
  return 0;
}
