#include<stdio.h>
int main(){
   char *s="123";
   int n=0;
   while(*s!='\0'){
   	n=n*8+*s-'0';
   	s++;
   }
   printf("%d",n);
}
