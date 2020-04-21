#include <stdio.h>
#include <string.h>
//void Hello();
//
//int main(){
//	Hello();
//	return 0;
//}
//
//void Hello(){
//	int i, N;
//	
//	scanf("%d",&N);
//	
//	for(i=1;i<=N;i++){
//		printf("Hello World, Judge ");
//		printf("%d!\n",i);
//	}
//	
//	return;
//}

//void MultTab();
//
//int main(){
//	MultTab();
//	
//	return 0;
//}
//
//void MultTab(){
//	int N, i;
//	
//	scanf("%d",&N);
//	
//	for(i=1;i<=9;i++){
//		printf("%d * %d = %d\n",N,i,N*i);
//	}
//}

//int A, B, tmp;
//int Greatest(int A,int B);
//
//int main(){
//	scanf("%d %d",&A,&B);
//	printf("%d\n",Greatest(A,B));
//	printf("%d\n",(A*B/Greatest(A,B)));
//	
//	return 0;
//}
//
//int Greatest(int A, int B){
//	if(B>A){
//		tmp = A;
//		A = B;
//		B = tmp;
//		return Greatest(A,B);
//	}
//	else if(B==0){
//		return A;
//	}
//	else{
//		A = A-B;
//		return Greatest(A,B);
//	}
//}

//int N;
//int Fac(int N);
//
//int main(){
//	scanf("%d",&N);
//	printf("%d",Fac(N));
//	
//	return 0;
//}
//
//int Fac(int N){
//	int tmp;
//	
//	if(N>0){
//		tmp = N;
//		N = N-1;
//		return tmp * Fac(N);
//	}
//	else{
//		return 1;
//	}
//}

char word[101];
int vowel(), vowel_check(char c);

int main(){
	scanf("%s", word);
	printf("%d\n",vowel());
	
	return 0;
}

int vowel(){
	int i, N=0;
	
	for(i=0; i<strlen(word); i++){
		N += vowel_check(word[i]);
	}
	
	return N;
}

int vowel_check(char c){
	if(c==97 || c==101 || c==105 || c==111 || c==117){
		return 1;
	}
	else{
		return 0;
	}
}

