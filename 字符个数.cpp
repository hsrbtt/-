#include<stdio.h>
int main(){
	char a=getchar();
	int b=0;
	int c=0;
	int d=0;
	while(a!='\n'){
	//	printf("%c",a);
		if((a>'a'&&a<'z')||(a>'A'&&a<'Z')){
			b++;
		}else if(a>'0'&&a<'9'){
			c++;
		}else{d++;
		}
		 a=getchar();
	}printf("��ĸ��%d��,������%d��,������%d��",b,c,d);
}
