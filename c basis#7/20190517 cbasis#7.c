#include <stdio.h>
#include <string.h>
//int main(){
//	int drawing[101][101]={0}, colored_number, colored_left, colored_bottom;
//	int i, j, k, square=0;
//	
//	scanf("%d",&colored_number);
//	
//	for(i=0; i<colored_number; i++){
//		scanf("%d",&colored_left);
//		scanf("%d",&colored_bottom);
//		
//		for(j=0; j<10; j++){
//			for(k=0; k<10; k++){
//				drawing[j+colored_left][k+colored_bottom] = 1;
//			}
//		}
//	}
//	
//	for(i=0; i<100; i++){
//		for(j=0; j<100; j++){
//			if(drawing[i][j]==1){
//				square++;
//			}
//		}
//	}
//	printf("%d",square);
//	
//	return 0;
//}

int main(){
	int M, N, U, L, R, D;
	int i, j;
	char crossword[11][11]={};
	
	scanf("%d %d",&M,&N);
	scanf("%d %d %d %d",&U,&L,&R,&D);
	
	for(i=0; i<M; i++){
		scanf("%s", crossword[i]);
	}

	
	for(i=1; i<=U; i++){
		for(j=1; j<=L+N+R; j++){
			if(i%2==1){
				if(j%2==1){
					printf("#");
				}
				else{
					printf(".");
				}
			}
			else{
				if(j%2==1){
					printf(".");
				}
				else{
					printf("#");
				}
			}
		}
		printf("\n");
	}
	

	
	for(i=1; i<=M; i++){
		for(j=1; j<=L+N+R; j++){
			if(j<=L||j>L+N){
				if((U+i)%2==1){
					if(j%2==1){
						printf("#");
					}
					else{
						printf(".");
					}
				}
				else{
					if(j%2==1){
						printf(".");
					}
					else{
						printf("#");
					}	
				}
			}
			else{
				printf("%c", crossword[i-1][j-3]);
			}
		}
		printf("\n");
	}
	
	for(i=1; i<=D; i++){
		for(j=1; j<=L+N+R; j++){
			if(i%2==1){
				if(j%2==1){
					printf("#");
				}
				else{
					printf(".");
				}
			}
			else{
				if(j%2==1){
					printf(".");
				}
				else{
					printf("#");
				}
			}
		}
		printf("\n");
	}
	return 0;
}

//int main(){
//	int M, N, U, L, R, D;
//	int i, j;
//	char crossword[11][11]={};
//	
//	scanf("%d %d",&M,&N);
//	scanf("%d %d %d %d",&U,&L,&R,&D);
//	for(i=0; i<M; i++){
//		scanf("%s", crossword[i]);
//	}
//	
//	for(i=1; i<=U+M+D; i++){
//		for(j=1; j<=L+N+R; j++){
//			if((j<=L||j>L+N)){
//				if((U+i)%2==1){
//					if(j%2==1){
//						printf("#");
//					}
//					else{
//						printf(".");
//					}
//				}
//				else{
//					if(j%2==1){
//						printf(".");
//					}
//					else{
//						printf("#");
//					}	
//				}
//			}
//			else{
//				printf("%c", crossword[i-1][j-3]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
