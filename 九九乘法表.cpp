#include <stdio.h>
int main(){
	int a,b;
	for(a=1;a<=9;a++){
		for(b=1;b<a+1;b++){
			printf("%d*%d=%-2d ",a,b,a*b);//%-2d��������� ռ��λ 
		}
		printf("\n");
	}
}
