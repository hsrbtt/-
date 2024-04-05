#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char a[100];
    gets(s);gets(a);//读取数组 
    int i,j,k;
    i=0;
    int len = strlen(a);//计算数组长度 
 
    while(s[i]!='\0')//遍历数组 
    {
        if(s[i]==a[0])
        {
            int count=0;
            for(j=i;j<=i+len-1;j++)
            {
                if(a[j-i]==s[j]) count++;
            }
            if(count==len)
            {
                for(k=i+len;k<strlen(s);k++)
                {
                    s[k-len]=s[k];
                }
                s[k-len]='\0';
                i=0;
            }
            else i++;
        }
        else i++;
    }
    printf("%s",s);
}
