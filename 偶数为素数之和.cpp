#include<stdio.h>
int sushu(int a){
	int i;
	int t=0;
	for(i=2;i<a;i++){
		if(a%i==0){
			t=1;
			return 0;
		}
	}
	if(t==0){
		return 1;
	}
}
int main(){
	int n;
	do{
		scanf("%d",&n);
	}while(n%2!=0);
   int i;
   for(i=1;i<n;i++){
   	if(sushu(i)&&sushu(n-i))
   	break;
   }printf("%d是%d与%d之和",n,i,n-i);
}
