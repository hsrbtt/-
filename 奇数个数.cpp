#include<stdio.h>
#include<math.h>
int main(){
	int n=0;
	int sum=4;
	for(n=1;n<=4;n++){
		if(n==1){
			printf("%dλ������λ%dλ\n",n,4);
		
		}else if(n==2){
			sum+=4*7; 
				printf("%dλ������λ%dλ\n",n,4*7);
		}else {
			sum+=4*pow(8,n-2)*7;
				printf("%dλ������λ%dλ\n",n,4*(int)pow(8,n-2)*7);
		}
	}printf("����Ϊ%d",sum);
} //һ����������ɵĸ��� 
