#include <stdio.h>

//#include <string.h>

#define N 40

int main ()

{

	char arr[N];

	printf ("please input sentence:\n ");

	gets(arr);

//	puts(arr);

	int t=0;

	for (int i=0;i<N;i++){

		if (arr[i]=='a'){

			for (int j=i;j<N;j++){

				arr[j]=arr[j+1];

				i--;

			}	

		}

	}

//	printf ("the outcome is :\n"); 

	puts(arr);

}


