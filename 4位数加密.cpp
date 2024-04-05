#include<stdio.h>
int main(){
	int x[4];
	int i;
	for(i=0;i<4;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<4;i++){
	x[i]+=5;
	x[i]%=10;
	}
	for(i=0;i<2;i++){
	int n=x[i];
	x[i]=x[3-i];
	x[3-i]=n;
	}
   	for(i=0;i<4;i++){
  printf("%d",x[i]);
	}
}
