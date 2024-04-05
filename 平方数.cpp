#include <stdio.h>
int main(){
	int a,b,c,d,x;
	for(a=2;a<=168/2;a++){
		if(168%a==0){
			b=168/a;
			c=(a+b)/2;
			d=(a-b)/2;
			x=d*d-100;
			printf("%d ",x);
	}
	}
}//一个整数，他加上100后是一个完全平方数，再加160又是一个完全平方数，问数为多少
 //思路把方程先列出来 
