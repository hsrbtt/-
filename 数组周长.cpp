#include<stdio.h>
int fun(int a[3][4]){
	int b;
	int sum;
	for(b=0;b<4;b++){
		sum+=a[0][b]+a[3-1][b];
	}
	for(b=1;b<3-1;b++){
		sum+=a[b][0]+a[b][4-1];
	}
		return sum;
} 
int main(){
    int b,c;
	int a[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};

	int sum=fun(a);
	printf("%d",sum);
	}

