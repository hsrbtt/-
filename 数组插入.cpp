#include<stdio.h>
 int main(){
 	int i,t;
 	int b=12;
 	int a[11]={1,2,3,4,5,6,8,9,10,30};
    	for(i=0;i<10;i++){
 		if(a[i]>b){
 			for(t=9;t>=i;t--){
 				a[t+1]=a[t];
			 }
			 a[t+1]=b;
			 break;}
		 }
		 int c;
		 for(c=0;c<11;c++){
		 
		 printf("%d ",a[c]);	}
	 }	
 
