#include<stdio.h>
int main(){
	int a=13;
	int b=9;
	while(b%a!=0){
		b=b*10+9;
	}printf("%d",b);
}
