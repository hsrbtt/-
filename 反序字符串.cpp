#include<stdio.h>
#include<string.h>
int main (){
	int leng;
	char s[100];
	gets(s);
	leng=strlen(s);
//	printf("%d\n",leng);
//	printf("%c",s[leng-1]);
 //   for(int a=0;a<leng/2;a++){
  //  	int b=s[a];
    //	s[a]=s[leng-1-a];
    //	s[leng-1-a]=b;
    	
	//}printf("%s",s);
   char *p;
    p=s;
   	int b;
   for(int a=0;a<leng/2;a++){
	  b=*(p+a);
   	*(p+a)=*(p+leng-1-a);
   	*(p+leng-1-a)=b;
   }printf("%s",s);
}
