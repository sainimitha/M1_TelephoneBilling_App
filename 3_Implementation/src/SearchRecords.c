#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include "TelePhoneBill.h"



void searchrecords()
{
	FILE *f;
	char phonenumber[20];
	f=fopen("c:/file.ojs","rb+");
	printf("Enter Phone Number to search in our database: ");
	scanf("%s", phonenumber);
	while(1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{	
			printf(" Record Found ");
			printf("\n\nPhonenumber: %s\nName: %s\nAmount: Rs.%0.2f\n",s.phonenumber,s.name,s.amount);
			exit(0);
		}
		else 
		{	
			printf("Requested Phone Number Not found in our database");
			exit(0);
		}
		

	}


	
}