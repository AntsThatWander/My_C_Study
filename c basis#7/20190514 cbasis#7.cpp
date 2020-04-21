#include <stdio.h>
#include <string.h>

//int main(){
//	int array1[101][101]={}, array2[101][101]={};
//	int N, M, i, j;
//	
//	scanf("%d %d",&N,&M);
//	for(i=0;i<N;i++){
//		for(j=0;j<M;j++){
//		scanf("%d",&array1[i][j]);
//		}
//	}
//	for(i=0;i<N;i++){
//		for(j=0;j<M;j++){
//		scanf("%d",&array2[i][j]);
//		}
//	}
//	for(i=0;i<N;i++){
//		for(j=0;j<M;j++){
//		printf("%d ",array1[i][j]+array2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main(){
	int i, j, k=0;
	char sen[5][16]={}, array[15][6];
	
	for(i=0; i<5; i++){
		scanf("%s",sen[i]);
		if(strlen(sen[i])>k){
			k=strlen(sen[i]);
		}
	}

	for(i=0; i<5; i++){
		for(j=0; j<k; j++){
			if(sen[i][j] == NULL){
				array[j][i] = -1;
			}
			else{
				array[j][i] = sen[i][j];
			}
		}
	}
	printf("\n");
	for(i=0; i<k; i++){
		for(j=0; j<5; j++){
			if(array[i][j] != -1){
				printf("%c",array[i][j]);
			}
		}
	}
	return 0;
}
