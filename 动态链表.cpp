#include<stdio.h>
#include<stdlib.h>
#define LET sizeof(struct student)
struct student{
	int num;
	double score;
	struct student *next;
}; 
int n;
struct student *creat(){
	struct student *head,*p1,*p2;
	p1=p2=(struct student *)malloc(LET);
	n=0;
	scanf("%d %lf",&p1->num,&p1->score);
	head=NULL;
	while(p1->num!=0){
		n+=1;
		if(n==1){
			head=p1;
		}else{
			p2->next=p1;
		}
		p2=p1;
		p1=(struct student *)malloc(LET);
			scanf("%d %lf",&p1->num,&p1->score);
	}
	p2->next=NULL;
	return(head);
}
int main(){
	struct student *p;
	p=creat();
	do{
		printf("%d %.3f\n",p->num,p->score);
		p=p->next;
	}while(p!=NULL);
	
}
