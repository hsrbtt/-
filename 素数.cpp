#include<stdio.h>
int main(){
	int x;

	for(x=200;x<300;x++){
	
		int i;
		int t=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				t=0;
			
			break;
			}
		}
		if(t==1){
		printf("%d ",x);
		}
	
	}
	printf("\n");
}
