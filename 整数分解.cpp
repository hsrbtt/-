
#include<stdio.h>
int main (){
int a;
scanf("%d",&a);
int b=a;
int c=1;
while(b>9){
	b/=10;
	c*=10;
}
//printf("%d %d\n",a,c);
do{
	int d=a/c;
	printf("%d",d);
	if(c>9){
		printf(" ");
	}
	a%=c;
	c/=10;
}while(c>0);

}

