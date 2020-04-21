#include <stdio.h>
//int main(){
//	int N, array[101]={}, C, i, R=0;
//	scanf("%d",&N);
//	
//	for(i=0;i<N;i++){
//		scanf("%d",&C);
//		if(array[C+1]==0){
//			array[C+1]=1;
//		}
//		else{
//			R++;
//		}
//	}
//	printf("%d\n",R);
//	return 0;
//}

//int main(){
//	int N, R, array[1001]={}, i, another=0;
//	for(i=0;i<1001;i++){
//		array[i]=-1;
//	}
//	for(i=0;i<10;i++){
//		scanf("%d",&N);
//		R=N%42;
//		if(array[R]==-1){
//			array[R]=R;
//			another++;
//		}
//	}
//	printf("%d",another);
//	return 0;
//}

int main(){
	int note, array[9]={}, i, a=0;
	
	for(i=1;i<9;i++){
		scanf("%d",&note);
		array[i]=note;
	}
	for(i=1;i<9;i++){
		if(array[i]==9-i){
			a--;
		}
		else if(array[i]==i){
			a++;
		}
	}
	
	if(a==8){
		printf("ascending");}
	else if(a==-8){
		printf("descending");}
	else{
		printf("mixed");}
		
	return 0;
}

