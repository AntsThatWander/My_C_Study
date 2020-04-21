#include <stdio.h>

//int main(){
//	int array[5]={}, i, sum;
//	
//	for(i=0;i<=4;i++){
//		scanf("%d",&array[i]);
//		if(array[i]<40){
//			array[i]=40;
//		}
//	}
//	for(i=0;i<=4;i++){
//		sum+=array[i];
//	}
//	printf("%d",sum/5);
//	return 0;
//}

//int main(){
//	int array[100]={}, N, v, safe=0, i;
//	scanf("%d",&N);
//	for(i=0;i<N;i++){
//		scanf("%d",&array[i]);
//	}
//	scanf("%d",&v);
//	for(i=0;i<N;i++){
//		if(array[i]==v){
//		safe++;
//		}
//	}
//	printf("%d",safe);
//	return 0;
//}

int main(){
	int array[30]={}, i, n;
	
	for(i=0;i<30;i++){
		array[i]=i+1;
		}
	
	for(i=0;i<28;i++){
		scanf("%d",&n);
		array[n-1]=0;
//		printf("%d\n",array[n-1]);
	}
	
	for(i=0;i<30;i++){
		if(array[i]!=0){
			printf("%d\n",array[i]);
		}
	}
	return 0;
}
