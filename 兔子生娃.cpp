#include <stdio.h>
int main(){
	int a,b,c;
	a=1;
	b=1;
	int d=0;
	for(c=0;c<10;c++){
		printf("%d %d ",a,b);
		a=a+b;
		b=a+b;
		d++;
		if(d%3==0){
		printf("\n");
	}

	}
}
