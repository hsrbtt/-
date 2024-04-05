#include<stdio.h>
#include"string.h"
#include"stdlib.h"
int main(){
	char s1[10]="sdasd";
	puts(s1);
	char s2[20]="hight";
	puts(s2);
	char *s3=(char *)malloc(strlen(s1)+strlen(s2));
    strcat(s3,s1);
    strcat(s3,s2);
	puts(s3);
	free(s3);
}
