#include<stdio.h>
int main(){
	int table[100];
	int i;
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		table[i]=1;
	}

	int index=0;
	int baoshu=0;
	int count=n;
while(count!=0){
	
	if(index>n){
			index=1;
		}
    	while(table[index]==0){
    	index++;
	   if(index>n){
			index=1;
		}
}
	if(baoshu==3){
		table[index]=0;
		printf("%-4d",index);
		baoshu=0;
		count--;
	}
baoshu++;
	index++;

}	

} //Լɪ�򻷣�n���˰�˳��Χ��һȦ���ӵ�һ���˿�ʼ����������3�����˳���ʣ�µ��˼��� ����˳�����ÿ���˳�����λ�� 
