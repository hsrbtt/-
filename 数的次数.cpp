#include<stdio.h>
int main(){
	int x;
	int number[10];
	int i;
	int a=0;
	scanf("%d",&x);
	for(i=0;i<10;i++){
		number[i]=0;
		if(i>=9){
		//	printf("i是%d",i);
		}
	}
	
	for( ;x!=-1,a<9;a++){
	     if(x>=0&&x<=9){
		
		number[x]++;
	}
	


		scanf("%d",&x);

	}
    for(i=0;i<10;i++){
        printf("%d出现的次数是%d",i,number[i]);
}
}
