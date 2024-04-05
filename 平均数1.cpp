#include<stdio.h>
int main(){
	int x;
    double sum=0;
    int cnt=0;
    int number[10];//定义数组 
    int a;
	scanf("%d",&x);
for(a=0;x!=-1,a<9;a++){
	number[cnt]=x;//对数组中的第cnt位元素进行赋值 
	sum+=x;
	cnt++;
	scanf("%d",&x);	
}
if(cnt>0){
	printf("%f\n",sum/cnt);
}
int i;
for(i=0;i<cnt;i++){
	if(number[i]>sum/cnt){//调用数组的第i位做判断 
	printf("%d ",number[i]);//输出数组中的第i位 
	}
}

}
