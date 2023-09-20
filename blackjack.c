#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int voce[5], pc[5], somavc, somapc, i = 4, j = 2, k, resposta;
	char *strvc = "VC";
    char *strd_1 = " = %d", *strd_n = " + %d", *strd_eq = " = %d\n";
    char *str_enter = "\n";
    char strx[100] = "PC = X + X", *strx_eq = " = X";
	
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
			
			j++;
		}
		
		i--;
	
		if(i > 0){
		
			printf("Deseja sortear mais um numero? \n");
			printf("Digite \"1\" para SIM ou \"2\" para NAO. \n");
		
			scanf("%d", &resposta);
			
			if(resposta != 1){
				break;
			}
		}
	}
	
	printf(strvc); // VC
	printf(strd_1, voce[0]); // _= %d
	
	for(k = 1; k <= j; k++){
		printf(strd_n, voce[k]); // _+ %d
	}
	
	printf(strd_eq, somavc); // _= %d\n
	
	printf(strx); // PC = X + X + X
	printf(strx_eq); // _= X
	printf(str_enter); // \n
			
	return 0;
}
