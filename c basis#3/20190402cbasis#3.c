//#include <stdio.h>

//int main(){
//	int a,i, min=1, num;
//	for(i=1;i<=9;i++){
//		scanf("%d",&a);
//		if (a>min){
//			min=a;
//			num=i;
//		}
//	}
//	printf("%d\n%d\n",min,num);
//	return 0;
//}


//int main()
//{
//	int N,i, j;
//	scanf("%d",&N);
//	for(i=1;i<=N;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�Լ� �ۿ� �ִ� ������ �ڵ����� 0���� ����ǳ�, �Լ� �ȿ� �ִ� ������ ������ ������ ����ȴ�. 

//int main(){
//	int N, i, j, t;
//	scanf("%d",&N);
//	for(i=1;i<=N;i++){
//		for(j=1;j<=N-i;j++){
//			printf(" ");
//		}
//		for(t=1;t<=i;t++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
#include <stdio.h>

//int main(){
//	int N, i, j, t, m;
//	scanf("%d",&N);
//	for(i=1;i<=N;i++){
//		for(j=1;j<=N-i;j++){
//			printf(" ");
//		}
//		for(t=1;t<=2*i-1;t++){
//			printf("*");
//		}
////		for(m=1;m<=N-i;m++){
////			printf(" ");
////		} ��°� �ڿ� ������ ���� ��, ��� ������ �߸� �� ���̴� �׷��� ���� ����. 
//		printf("\n");
//	}
//	return 0;
//}

//int main(){
//	int N, i, j, t;
//	scanf("%d",&N);
//	for(i=1;i<=N;i++){
//		for(j=0;j<N-i;j++){
//			printf(" ");
//		}
//		if(i>=2){
//			printf("*");
//		}
//		for(t=1;t<=2*i-3;t++){
//			printf(" ");
//		}
//		printf("*");
//		printf("\n");
//	}
//	return 0;
//} 

int main(){
	int N, i, j, t;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		for(j=1;j<i;j++){
			printf(" ");
		}
		for(t=1;t<=(-2)*i+(2*N+1);t++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=N-1;i++){
		for(j=1;j<N-i;j++){
			printf(" ");
		}
		for(t=1;t<=2*i+1;t++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
