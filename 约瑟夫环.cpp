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

} //约瑟夫环：n个人按顺序围成一圈，从第一个人开始报数，报到3的人退出，剩下的人继续 ，按顺序输出每个退出的人位数 
