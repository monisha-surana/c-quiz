/***********************************************************************************************
Created By: Monisha Surana
Contact Id: monishasurana1@gmail.com
CopyRights Reserved @ Monisha Surana
Date of Creation: 24 - August - 2017
Date of Last Modification: 30 - August - 2017

Programme Brief: User Info & Subject Selection
************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"variable_function.h"

#ifndef MAX
#define MAX 30
#endif

#ifndef NAME_MAX_LEN
#define NAME_MAX_LEN 30
#endif

#ifndef HELP
#define HELP "All questions require a number as an answer. \nSome questions ask for a one-digit answer and others a two-digit number. \nAn example of a question that requires a one-digit number as an answer could be: 1 = What colour is grass.\nIn this case, you would type '1' to choose this answer. Here is an example of a possible answer of a question which requires a two - digit number as an answer: 74. \nNotice that there is no '=' or words, but just a number unlike a question that asks for a one-digit number as an answer."
#endif

userinfo *user;

/* First Name and Last Name Validation function Starts here*/
int namevalidate(char * name)
{
	int flag=1;
	while(*name != '\0')
	{
		if((*name >= 65 && *name <= 90) || (*name >=97 && *name <= 122))
		{
			flag=0;		
		}
		else
		{
			flag=1;
		}
		name++;
	}	
	if(flag)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}	
/* First Name and Last Name Validation function Ends here*/

/* Converting First Name into Upper Case function starts here */
void convert_upper(char * fname)
{
	int change_upper = 0;						/* To convert user name into uppercase letters */
	
	register int index1, index2;					/* Register Declaration (Used very frequently) */
	
	/* While Loop to convert First name into Upper Case Letters(strupr) */
	while (fname[change_upper] != '\0') 
	{
		if (fname[change_upper] >= 'a' && fname[change_upper] <= 'z') 
		{
			fname[change_upper] = fname[change_upper] - 32;
		}
		change_upper++;
	}
	/* While Loop ends here after converting into upper case */
}
/* Converting First Name into Upper Case function Ends here */

/* Converting Last Name into Lower Case function starts here */
void convert_lower(char * lname)
{
	int change_lower = 0;							/* To convert user name into Lowercase letters */
	
	/* While Loop to convert Last name into Lower Case Letters(strlwr) */
	while (lname[change_lower] != '\0') 
	{
		if (lname[change_lower] >= 'A' && lname[change_lower] <= 'Z') 
		{
			lname[change_lower] = lname[change_lower] + 32;
			
		}
		change_lower++;
	}
	/* While Loop ends here after converting into Lower case */
	
}
/* Converting Last Name into Lower Case function Ends here */

/* Concatenating First Name & Last Name function starts here */
void concat_name(userinfo *user)
{
	/* Concatenating First Name and Last Name both using while loop (strcat)*/
	int index1 = 0;
	int index2 = 0;
	while(user->fname[index1] != '\0')
  		index1++;
  	
  	while(user->lname[index2] != '\0')
  	{
    	user->fname[index1] = user->lname[index2];
    	index1++;
    	index2++;
  	}
  	user->fname[index1]='\0';	
  	
	printf("Welcome %s to Quiz Competition \n\n",user->fname);
	
}
/* Concatenating First Name & Last Name function Ends here */

/* UserName Comapre function starts here */
void username_compare(userinfo *user)
{
	/* Check that first username and last username is matching or not(strcmp) */
	static int check = 0;									/* Static Storage Class */
	while(user->fname[check] == user->lname[check])
	{
		if(user->fname[check] == '\0' || user->lname[check] == '\0')
			break;
		check += 1;
	}
	if(user->fname[check] == '\0' && user->lname[check] == '\0')
	{
		printf("First Name and Last Name are Matching! \n");
	}
	else
	{
		//printf("First Name and Last Name are Not Matching, Good !! \n");
	}
}
/* UserName Comapre function starts here */

/* Switch case to select one subject for quiz */
subject_selection(char *exit_status)
{

	printf("Select any 1 of the Option and proceed for Quiz: \n");
	printf("1. %s \n",subject1);
	printf("2. %s \n",subject2);
	printf("3. %s \n",subject3);
	printf("4. %s \n",subject4);
	printf("5. Exit \n");
	printf("6. Help \n");
	scanf("%d",&select_subject);
	switch(select_subject)
	{
		case 1:
			{

				printf("You have selected Web Development \n");
				web_development_quiz(&result);
				break;
			}
		case 2:
			{
				printf("You have selected Programming in C \n");
				programming_c_quiz(&result);
				break;
			}
		case 3:
			{
				printf("You have selected Analytical Skills \n");
				analytical_skills(&result);
				break;
			}
		case 4:
			{
				printf("You have selected Communication Skills \n");
				communication_skills(&result);
				break;
			}
		case 5:
			{
				printf(" \n Would you like to Exit the Game ? Enter Y or N: \n");
				//user.exit_status = getche();
				if((user.exit_status  == 'Y') || (user.exit_status == 'y'))
				{
					printf("GoodBye!");	
					exit(0);
				}
				else
				{
					subject_selection(user.exit_status);			
					break;
				}
			}
		case 6:
			{
				printf(HELP);
				break;
			}
		default:
			{
				printf("Please select valid option to proceed further \n");
				subject_selection(user.exit_status);			/* Recrusion method to call function itself when a user enter anything apart from 1 to 6 */
			}
	}
}
/*Switch case Control Struture ends here */

