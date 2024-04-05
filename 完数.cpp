#include<stdio.h>
int main (){
	int a;
	int b;
	int sum=0;
    for(a=2;a<=1000;a++){
    	sum=0;
    	for(b=1;b<a;b++){
    		if(a%b==0)
    			sum+= b;
			
    		
		} 
		if(sum==a)
			printf("%d ",a);
		
}
}

