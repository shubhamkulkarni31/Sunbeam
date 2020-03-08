/*
 * Main.c
 *
 *  Created on: Feb 7, 2020
 *      Author: admin
 */


#include<stdio.h>
#include<string.h>
int main(void)
{
char str[]= "Welcome,to,Sunbeam,CDAC,Diploma,Course";
char* token=strtok(str, ",");
while(token!=NULL)
{
	printf("%s\n", token);
	token = strtok(NULL, ",");
}

}













