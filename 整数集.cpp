#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int b,c,d;
	int i=0;
	for(b=a;b<=a+3;b++){
		for(c=a;c<=a+3;c++){
			for(d=a;d<=a+3;d++){
				if(b!=c&&c!=d&&d!=a){
							i++;
							printf("%d%d%d",b,c,d);
							if(i==6){
								printf("\n");
								i=0;
							}else{
								printf(" ");
							}
				    	}
					}
				}
			}
		}
	

