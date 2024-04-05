#include<stdio.h>
int main(){
	int a,b,c;
	int sum;
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	printf("%d",(a<b?a:b)<c?(a<b?a:b):c);
	printf("%d",sum-((a<b?a:b)<c?(a<b?a:b):c)-((a>b?a:b)>c?(a>b?a:b):c));
	printf("%d",(a>b?a:b)>c?(a>b?a:b):c);
	
} 
