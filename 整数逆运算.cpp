#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int a;
	int c=0; 
	//int b=0;
	while(x>0){
		a=x%10;
		printf("%d",a);
	//	b=b*10+a;
		//printf("x=%d a=%d b=%d\n",x,a,b);
		x/=10 ;
		c++;
	}printf(" ÊÇ%dÎ»Êý",c);
	//printf("%d",b);
}
