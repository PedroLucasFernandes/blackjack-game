#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int repita = 1;
	
	while(repita == 1){
	
	
		int voce[5], pc[5], somavc, somapc, i = 4, j = 2, k, sorteio = 0, resposta;
		char *strvc = "VC";
	    char *strd_1 = " = %d", *strd_n = " + %d", *strd_eq = " = %d\n";
	    char *str_enter = "\n";
	    char strx[100] = "PC = X + X", *strx_eq = " = X", *strpc = "PC";
		
		srand(time(NULL));
		
		while(i > 0){
		
			if(i == 4){
				
				voce[0] = (rand() % 10) + 1;
				voce[1] = (rand() % 10) + 1;
				somavc = voce[0] + voce[1]; 
				
				pc[0] = (rand() % 10) + 1;
				pc[1] = (rand() % 10) + 1;
				somapc = pc[0] + pc[1];
				
				printf(strvc); // VC
				printf(strd_1, voce[0]); // _= %d
				printf(strd_n, voce[1]); // _+ %d
				printf(strd_eq, somavc); // _= %d\n
				
				printf(strx); // PC = X + X
				printf(strx_eq); // _= X
				printf(str_enter); // \n
				
			} else {
				
				voce[j] = (rand() % 10) + 1;
				pc[j] = (rand() % 10) + 1;
				
				while(voce[j] == voce[0] || voce[j] == voce[1]){
					voce[j] = (rand() % 10) + 1;
				}
				
				while(pc[j] == pc[0] || pc[j] == pc[1]){
					pc[j] = (rand() % 10) + 1;
				}
				
				somavc += voce[j];
				somapc += pc[j];
				
				if(sorteio < 3){
				
					strcat(strx, " + X");
					
					printf(strvc); // VC
					printf(strd_1, voce[0]); // _= %d
					
					for(k = 1; k <= j; k++){
						printf(strd_n, voce[k]); // _+ %d
					}
					
					printf(strd_eq, somavc); // _= %d\n
					
					printf(strx); // PC = X + X + X
					printf(strx_eq); // _= X
					printf(str_enter); // \n
					
				}
				
				j++;
			}
			
			i--;
		
			if(i > 0){
			
				printf("Deseja sortear mais um numero? \n");
				printf("Digite \"1\" para SIM ou \"2\" para NAO. \n");
			
				scanf("%d", &resposta);
				
				if(resposta != 1){
					break;
				} else {
					sorteio ++;
				}
			}
		}
			
			printf(strvc); // VC
			printf(strd_1, voce[0]); // _= %d
			
			for(k = 1; k < j; k++){
				printf(strd_n, voce[k]); // _+ %d
			}
			
			printf(strd_eq, somavc); // _= %d\n
			
			printf(strpc); // PC
			printf(strd_1, pc[0]); // _= %d
			
			for(k = 1; k < j; k++){
				printf(strd_n, pc[k]); // _+ %d
			}
			
			printf(strd_eq, somapc); // _= %d\n
		
		if(somavc > somapc && somavc <= 21){
			printf("Voce ganhou!\n");
			printf("Voce maior que PC!\n \n");
		} else if(somapc > somavc && somapc <= 21){
			printf("PC ganhou!\n");
			printf("PC maior que Voce!\n \n");
		} else if(somapc > 21 && somavc <= 21){
			printf("Voce ganhou!\n");
			printf("PC passou de 21 e estourou!\n \n");
		} else if(somavc > 21 && somapc <= 21){
			printf("PC ganhou!\n");
			printf("Voce passou de 21 e estourou!\n \n");
		} else if(somavc > 21 && somapc > 21){
			printf("Empate!\n");
			printf("Os dois passaram de 21!\n \n");
		} else if (somavc == somapc && somavc <= 21){
			printf("Empate!\n");
			printf("Os dois tiveram a mesma pontuacao!\n \n");
		}
		
		printf("Quer jogar mais uma vez? \n");
		printf("Digite \"1\" para SIM e \"2\" para NAO.\n");
		
		scanf("%d", &repita);
	}
	
	return 0;
}
