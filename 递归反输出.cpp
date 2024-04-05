#include<stdio.h>
char f(int a){
	char c;
	if(a==1){
		c=getchar();
		putchar(c);
	}else{
	    c=getchar();
	    f(a-1);
	    putchar(c);
	}
}
int main(){
	f(5);
}
