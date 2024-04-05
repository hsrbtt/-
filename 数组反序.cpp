#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5,6,7,8};
	int leng;
	int i;
	leng=sizeof(a)/sizeof(int);
	for(i=leng-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
