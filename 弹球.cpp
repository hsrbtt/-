#include<stdio.h>
int main(){ 
float a=100;
float b=100;
  a=a/2; 
  int c; 
for(c=1;c<2;c++){
	b+=a*2;
	a=a/2;
}
   printf("%f %f",b,a);
    return 0;
}
