#include<stdio.h>
int main(){
	int x;
    double sum=0;
    int cnt=0;
    int number[10];//�������� 
    int a;
	scanf("%d",&x);
for(a=0;x!=-1,a<9;a++){
	number[cnt]=x;//�������еĵ�cntλԪ�ؽ��и�ֵ 
	sum+=x;
	cnt++;
	scanf("%d",&x);	
}
if(cnt>0){
	printf("%f\n",sum/cnt);
}
int i;
for(i=0;i<cnt;i++){
	if(number[i]>sum/cnt){//��������ĵ�iλ���ж� 
	printf("%d ",number[i]);//��������еĵ�iλ 
	}
}

}
