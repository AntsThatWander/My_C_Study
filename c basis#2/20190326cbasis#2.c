#include <stdio.h>

//int main()
//{
//	int i,N;
//	scanf("%d",&N);
//	
//	for(i=1; i<=N; i++)
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//}

//int main()
//{
//	int i, N;
//	scanf("%d",&N);
//	
//	for(i=N;i>0;i--)
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//}

//int main()
//{
//	int i, N;
//	scanf("%d",&N);
//	
//	for(i=0;i<N;i++)
//	{
//		i=N-i;
//		printf("%d\n",i);
//	}
//	return 0;
//}

//int main()
//{
//	int N, X, i, A;
//	scanf("%d %d",&N,&X);
//	for(i=0;i<N;i++)
//	{
//		scanf("%d",&A);
//		if(A>=X)
//		{
//			continue;
//		}
//		else
//		{
//			printf("%d ",A);
//		}
//	}
//	return 0;
//}

int main()
{
	int i, U, sum=0, min=100;
	for(i=0;i<7;i++)
	{
		scanf("%d",&U);
		if(U%2!=1)
		{
			continue;
		}	
		sum+=U;
		if(min>U){
		min=U;	
		}
	}
	if(sum==0)
	{
		printf("-1");
	}
	else{
	printf("%d\n%d\n",sum,min);}
	
	return 0;
}
