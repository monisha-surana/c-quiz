/***********************************************************************************************
Created By: Monisha Surana 
Contact Id: monishasurana1@gmail.com
CopyRights Reserved @ Monisha Surana, 
Date of Creation: 24 - August - 2017
Date of Last Modification: 30 - August - 2017

Programme Brief: QUIZ COMPETITION Main page
************************************************************************************************/

/* Inclusion of header files */
#include<stdio.h>
#include<stdlib.h>

#include"variable_function.h"

/* Macro Defining */

#define help "All questions require a number as an answer. \nSome questions ask for a one-digit answer and others a two-digit number. \nAn example of a question that requires a one-digit number as an answer could be: 1 = What colour is grass.\nIn this case, you would type '1' to choose this answer. Here is an example of a possible answer of a question which requires a two - digit number as an answer: 74. \nNotice that there is no '=' or words, but just a number unlike a question that asks for a one-digit number as an answer."

#define MAX 30									/* Maximum array(1-D) size*/

#define ROW 12									/* Maximum Row Size */

#define COL 12									/* Maximum Column Size */

#define NAME_MAX_LEN 32							/*  Maximum name length is 32 */


/* Global Variable Declaration */

const char *subject1="Web Development";				/* Subject 1 stores Web Development as subject */
const char *subject2="Programming in C";			/* Subject 2 stores Programming in C as subject */
const char *subject3="Analytical Skills";			/* Subject 3 stores Analytical Skills as subject */
//const char *subject4="Communication Skills";		/* Subject 4 stores Communication Skills as subject */
int select_subject;									/* Subject selection */

int answer;	
unsigned int correct_answer ; 
signed int wrong_answer ;
float result = 0;
int change_uppper = 0;			/* To convert user name into uppercase letters */
int change_lower = 0;			/* To convert user name into Lowercase letters */
int flag;

char exit_status;

/* Main function starts here. */
int main()
{
	userinfo  user;				/* Structure Variable Declaration */
	
	printf(" \t \t \t \t \t WELCOME TO QUIZ COMPETITION \t \t \t \t \t \n");
	do
	{
		printf("\t \t \t \t \t Enter your First Name : ");
		scanf("%s",user.fname);
		if(namevalidate(user.fname))
		{
			printf("Re enter");
			system("cls");
			flag=1;
		}	
		else
		{
			flag=0;
		}
	}while(flag);
	
	do
	{
		printf("\t \t \t \t \t Enter your Last Name : ");
		scanf("%s",user.lname);
		if(namevalidate(user.lname))
		{
			printf("Re enter");
		//	Sleep(1000);
			system("cls");
			flag=1;
		}	
		else
		{
			flag=0;
		}
	}while(flag);

	/* Do While Loop to enter and validate proper age  */
	do 
	{
		printf("\t \t \t \t \t Enter your Age : ");
		scanf("%d",&(user.age));
		if((user.age < 2) 	|| (user.age > 99))
		{
			printf("Your age is not correct. Please input valid age");
		}
	}while ((user.age < 2) || (user.age > 99));
	/* Do while loop ends here   */
	
	printf("Size of Structure %d \n",sizeof(user));		/* Size of Structure (Size of all elements summed together)*/
		
	convert_upper(user.fname);
	convert_lower(user.lname);
	concat_name(&user);
	username_compare(&user);			/* Function user_info invoking  */
	subject_selection(&user);

	return 0;
}
/* Main Function Ends Here. */
