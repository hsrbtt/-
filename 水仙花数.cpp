#include<stdio.h>
int main(){
	int n,a,b,c,d;
	for(n=100;n<1000;n++){
		a=n%10;
		b=n/10%10;
		c=n/100;
		if(n==c*c*c+b*b*b+a*a*a){
			printf("%d\n",n);
		}
	}
}
