#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int leng;
	leng=sizeof(a)/sizeof(int);
	
	int t;
	int i;
	for(i=0;i<4;i++){
		int *p=a+leng-1;
		t=*p;
		while(p>a){
			*p=*(p-1);
			p--;
		}
		*p=t;
	}
	for(i=0;i<leng;i++){
	printf("%d ",a[i]);	
	}
	
	
} 
