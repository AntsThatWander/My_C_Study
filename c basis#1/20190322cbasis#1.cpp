//#include <stdio.h>
//
//int main()
//{
//	int A,B;
//	scanf("%d %d",&A,&B);
//	printf("%d\n",A+B);
//	printf("%d\n",A-B);
//	printf("%d\n",A*B);
//	printf("%d\n",A/B);//��
//	printf("%d\n",A%B);//������ 
//	
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int A,B;
//	scanf("%d %d",&A,&B);
//	printf("%.9lf\n",(double)A/B);
//	
//	return 0;
// } 
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d",&a);
//
//	if(90<=a && a<=100){
//		printf("A");
//	}
//	else if(80<=a && a<=89){
//		printf("B");
//	}
//	else if(70<=a && a<=79){
//		printf("C");
//	}
//	else if(60<=a && a<=69){
//		printf("D");
//	}
//	else{
//		printf("F")	;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a;
//	scanf("%d",&a);
//	
//	int a;
//	scanf("%d",&a);
//	
//	if(90<=a){
//		printf("A");
//	}
//	else if(80<=a){
//		printf("B");
//	}
//	else if(70<=a){
//		printf("C");
//	}
//	else if(60<=a){
//		printf("D");
//	}
//	else{
//		printf("F")	;
//	}
//	return 0;
//}
//else if�� if�� ������ �̹� ���������Ƿ�, ���� �ÿ��� ������ �� �ᵵ �ȴ�.
#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(0<a&&a<7&&0<b&&b<7&&0<c&&c<7)
	{
		if(a==b&&b==c&&a==c)
		{
			printf("%d",10000+(a*1000));
		}
		else if(a==b)
		{
			printf("%d",1000+(a*100));
		}
		else if(a==c)
		{
			printf("%d",1000+(a*100));
		}
		else if(b==c)
		{
			printf("%d",1000+(b*100));
		}
		else
		{
			if(a>b&&a>c)
			{
				printf("%d",100*a);
			}
			else if(b>c&&b>a)
			{
				printf("%d",100*b);
			}
			else if(c>a&&c>b)
			{
				printf("%d",100*c);
			}
		}
	}
	else
	{
		printf("�������� �ֻ����� ���� �� ���� ���ڰ� ���־�����?");
	}
	return 0;
}//github.com

