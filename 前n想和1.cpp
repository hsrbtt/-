#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	int i;
	double sum=0.0;
    scanf("%d",&x);
	for(i=1;i<=x;i++){
	sum=sum+(pow(-1,i-1)*1.0/i);
	}
printf("%f",sum);
}
