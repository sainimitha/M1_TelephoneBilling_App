#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include "TelePhoneBill.h"


void deleterecords()
{
	FILE *f,*t;
	int i=1;
	char phonenumber[20];

	printf("Enter the phone number to be deleted :");
	scanf("%s",phonenumber);
	while(1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{       i=1;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       
		printf("Phone number \"%s\"  found",phonenumber);
		remove("c:/file.ojs");
		rename("c:/temp.ojs","c:/file.ojs");
		
		
	}else
		printf("Phone number \"%s\" not found",phonenumber);
	remove("c:/file.ojs");
	rename("c:/temp.ojs","c:/file.ojs");
	printf("The Number %s Successfully Deleted!!!!",phonenumber);
	

}