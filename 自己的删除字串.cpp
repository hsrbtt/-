#include<stdio.h>
#include <string.h>
int main(){
	char s1[100];
	char s2[100];
	gets(s1);
	gets(s2);
	char *p;
	int leng;
	leng=strlen(s2);
	while(strstr(s1,s2)!=0){
		p=strstr(s1,s2);
		while(*p!='\0'){
		*p=*(p+leng);
		p++;	
		}
	}printf("%s",s1);
}
