#include<stdio.h> 
#include<string.h>
	struct xinxi{
		char name[20];
		int age;
		 char xingbie[5];
	};
void input(struct xinxi *a){
printf("�������������������䣬�Ա�\n");
int i;
for(i=0;i<3;i++){
	scanf("%s %d %s",a[i].name,&a[i].age,a[i].xingbie);//ע��& 
}	
}
void output(struct xinxi *a){
int i;
for(i=0;i<3;i++){
	printf("%s %d %s\n",a[i].name,a[i].age,a[i].xingbie);
}	
}
int main(){
	
	struct xinxi a[3];
	void input(struct xinxi *a);
	void output(struct xinxi *a);
	input(a);
	output(a);
} 
