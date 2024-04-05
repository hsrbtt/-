#include<stdio.h>

double fact( int n )
{
   int s;
   if(n>1) return n*fact(n-1);
   if(n==1||n==0) return 1;
}
double factsum( int n )
{
   if(n<1) return 0;
   return factsum(n-1)+fact(n);
}
int main(){
	int sum=1;
	printf("阶乘为%f\n",fact(sum));
printf("阶乘相加之和为%lf",factsum(sum));
}
