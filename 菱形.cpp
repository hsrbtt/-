#include<stdio.h>
int main(){
	int a,b,c;
	for(a=0;a<4;a++){
    	for(b=0;b<3-a;b++){
		printf(" ");
		}
		for(c=0;c<2*a+1;c++){
	printf("*");
			}
		
		printf("\n");
	}
	for(a=0;a<3;a++){
			for(b=0;b<a+1;b++){
		printf(" ");
		}
		for(c=0;c<5-(2*a);c++){
	printf("*");
			}
			printf("\n");
	}
	
}
