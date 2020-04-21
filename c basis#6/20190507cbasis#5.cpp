#include <stdio.h>
#include <string.h>

//int main(){
//	char selection[2]={};
//	
//	scanf("%s",selection);
//	printf("%d\n",selection[0]);
//	
//	return 0;
//}

//int main(){
//	char word[101]={};
//	int i;
//	
//	scanf("%s",word);
//	
//	for(i=0;i<strlen(word);i++){
//	}
//	printf("%d\n",i);
//	
//	return 0;
//}

//int main(){
//	char string[1001]={}, Alpha, Omega;
//	int TC130, i, j;
//	
//	scanf("%d",&TC130);
//	
//	for(i=0; i<TC130; i++){
//		scanf("%s",string);
//		for(j=0; j<strlen(string); j++){
//			if(j==0){
//				Alpha=string[j];
//			}
//			if(j==strlen(string)-1){
//				Omega=string[j];
//			}
//		}
//		printf("%c%c\n",Alpha,Omega);
//	}
//	
//	return 0;
//}

//int main(){
//	char Inviter[101]={}, Servant[12]={};
//	int i, j;
//	
//	scanf("%s",Inviter);
////	for(i=0; i<strlen(Inviter); i++){
////		Servant[(i+1)%10]=Inviter[i];
////		if((i+1)%10==0){
////			Servant[10]=Inviter[i];
////			printf("%s\n",Servant);
////		}
////	}
////	if(strlen(Inviter)%10!=0){
////		printf("%s\n",Servant);
////	}
//
//	
//	return 0;
//}

//int main(){
//	char Die[101]={};
//	int i;
//	
//	scanf("%s",Die);
//	for(i=0; i<strlen(Die); i++){
//		printf("%c",Die[i]);
//		if((i+1)%10 == 0){
//			printf("\n");
//		}
//	}
//	if(i%10!=0){
//		printf("\n");
//	}
//	return 0;
//}

//int main(){
//	char word[101]={};
//	int i, k;
//	
//	scanf("%s",word);
//	for(i=0; i<strlen(word); i++){
//		if(word[i]<=90){
//			k=word[i]+32;
//			printf("%c",k);
//		}
//		else{
//			k=word[i]-32;
//			printf("%c",k);
//		}
//	}
//	
//	return 0;
//}

//int main(){
//	char word[101]={};
//	int i;
//	
//	scanf("%s",word);
//	for(i=0; i<strlen(word); i++){
//		if(word[i]<=90 && word[i]!=45){
//			printf("%c",word[i]);
//		}
//	}
//	return 0;
//}

int main(){
	char word[101]={};
	int i, array[26]={0};
	
	scanf("%s",word);
	for(i=0; i<strlen(word); i++){
		array[word[i]-97]++;
	}
	for(i=0; i<26; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
