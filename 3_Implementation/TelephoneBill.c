/**
 * @file Telephone bill.c
 * @author Sainimitha Mullapudi
 * @brief Telephone Billing
 * @version 0.1
 * @date 2022-02-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */



#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include "TelePhoneBill.h"
#include "addrecords.c"
#include "payment.c"
#include "searchrecords.c"
#include "deleterecords.c"

void payment();
void addrecords();      //Intializing addrecords function
void deleterecords();
void searchrecords();
void payment();
char get;


int main()
{			
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n**********************");
	printf("\n\t\t------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");
	printf("\n\t\t**********************");
	getch();
    system("cls");
	while (1)
	{
		system("cls");
		printf("\n Enter\n A : for New Phone number addition.");
		printf("\n P : for bill payment");
		printf("\n S : for searching phone number.");
		printf("\n D : for deleting phone number.");
		printf("\n E : for close the program\n");
		char choice;
		choice=getche();
		choice=toupper(choice);
		switch(choice)
		{
			case 'P':
				payment();break;
			case 'A':
				addrecords();break;
			case 'S':
				searchrecords();break;
			case 'D':
				deleterecords();break;
			case 'E':
				system("cls");
				printf("\n\n\t\t\t\tTHANK YOU");
				printf("\n\n\n\n\n:\n\tFOR USING OUR SERVICE. Please come again");
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\nAny key to continue");
				getch();
		}
	}
}