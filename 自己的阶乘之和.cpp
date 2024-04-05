#include"stdio.h"
double jc(int a){
	if(a==1){
		return 1;
	}else return a*jc(a-1);
} 
int main(){
		double sum=0;
		int i;
	for(i=1;i<=5;i++){
	   sum+=jc(i);
	}
printf("%lf",sum);
}
