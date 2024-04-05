#include <stdio.h>
int main(){
	int a;
	int b,c;
	c=2; 
	int d=0;
	int sum=0;
	scanf("%d",&a);
	if(a>1){
	
	printf("2+");
	for(b=1;b<a-1;b++){
      while(d!=b){
			c=c*10+2;
			printf("%d+",c); 
           				
			 d++;
			 sum=sum+c;
	 }	 
	}	
	c=c*10+2;
	sum=sum+c+2;
	printf("%d=%d",c,sum);
}else{
printf("2");}
	
}


