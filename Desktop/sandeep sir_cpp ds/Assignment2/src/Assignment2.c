/*
 ============================================================================
 Name        : Assignment2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
int main1(void)
{
	setvbuf(stdout,NULL,_IONBF,0);
	char src[60];
	char dest[60];
	printf("Enter the src string:	\n");
	scanf("%s",src);
	printf("Enter the dest string:	\n");
	scanf("%s",dest);
	int a=strlen(src);
	printf("length of src:	%d\n",a);
//	strcpy(dest,src);
//	printf("dest string after copying:	%s\n", dest);
	strcat(dest,src);
	printf("dest string after concating:	%s\n",dest);
	int cmp=strcmp(src,dest);
	printf("cmp:	%d\n",cmp);
	strrev(dest);
	printf("dest string after reversing:	%s\n",dest);
}
*/


int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);
	int choice,length,cmp;
	char src[60];
	char dest[60];
	do
	{
		printf("1.String length\n ");
		printf("2.String copy\n");
		printf("3.String concat\n");
		printf("4.String compare\n");
		printf("5.String reverse\n");
		printf("0.Exit\n");
		printf("Enter choice:	");
		scanf("%d", &choice);
		if(choice==0)
			break;
		printf("Enter the src string\n");
		scanf("%s",src);
		printf("Enter the dest string\n");
		scanf("%s",dest);

		switch(choice)
		{
		case 1:
			length=strlen(src);
			printf("string length:	%d\n",length);
			break;
		case 2:
			strcpy(dest,src);
			printf("dest string after copying:	%s\n", dest);
			break;
		case 3:
			strcat(dest,src);
			printf("dest string after concating:	%s\n", dest);
			break;
		case 4:
			cmp=strcmp(dest,src);
			printf("comparision:	%d\n", cmp);
			break;
		case 5:
			strrev(src);
			printf("string after reversing\n:	%s\n",src);
			break;
		}
	}while(choice!=0);

	return EXIT_SUCCESS;
}
