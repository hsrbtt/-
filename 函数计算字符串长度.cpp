#include<stdio.h>
int changdu(char *a){
	int count=0;
   char *p;
   p=a;
    while(*p!='\0'){
    	count++;
    	p++;
    
	}
	return count;
}
int main(){
	char *a="dasdadasdas";
	printf("%d",changdu(a));
	
} 
