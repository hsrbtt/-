#include<stdio.h> 
int main(){
	int x ,y,z;
	for(x=1;x<=20;x++){
		for(y=1;y<=30;y++){
		z=100-x-y;
				if((x+y+z==100)&&(15*x+9*y+z==300)){
					printf("����%d�� ĸ��%d�� С��%d��\n",x,y,z);
				
			}
		}
	}
} 
