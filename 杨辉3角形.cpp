#include<stdio.h>
int main(){
	int h,l;
	int a [10][10]={};
	
		for(h=0;h<10;h++){
		for(l=0;l<=h;l++){
		if(h==l||l==0){
			a[h][l]=1;
		}
	}
		}
			for(h=2;h<10;h++){
		for(l=1;l<h;l++){
			a[h][l]=a[h-1][l]+a[h-1][l-1];
		}
	}
	for(h=0;h<10;h++){
		for(l=0;l<=h;l++){
			printf("%d ",a[h][l]);
		}
		printf("\n");
	}
} 
