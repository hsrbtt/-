#include<stdio.h>
int main(){
	int a[10];
	int b;
	for(b=0;b<5;b++){
		scanf("%d",&a[b]);
	}
	int x;
	int c,max;
	max=0;
	for(c=0;c<5;c++){
	if(a[c]>max){
			max=a[c];
			x=c;
	}		
	}
	int d;
	d=a[0];
	a[0]=max; 
	a[x]=d;
	int y;
	int t=max;
	for(c=0;c<5;c++){
	if(a[c]<t){
			t=a[c];
			y=c;	
}
}
int e;
e=a[4];
a[4]=t;
a[y]=e;
for(b=0;b<5;b++){
		printf("%-4d",a[b]);
	}


}/* 交换数组里第一位为最大的数，最后一位为最小数*/
