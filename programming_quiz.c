/***********************************************************************************************
Created By: Monisha Surana
Contact Id: monishasurana1@gmail.com
CopyRights Reserved @ Monisha Surana
Date of Creation: 24 - August - 2017
Date of Last Modification: 30 - August - 2017

Programme Brief: Programming MCQ Quiz
************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include"variable_function.h"

#ifndef HELP
#define HELP "All questions require a number as an answer. \nSome questions ask for a one-digit answer and others a two-digit number. \nAn example of a question that requires a one-digit number as an answer could be: 1 = What colour is grass.\nIn this case, you would type '1' to choose this answer. Here is an example of a possible answer of a question which requires a two - digit number as an answer: 74. \nNotice that there is no '=' or words, but just a number unlike a question that asks for a one-digit number as an answer."
#endif

/* Programming Quiz starts here */
void programming_c_quiz(float *result)
{
	*result = 0;

	system("cls");
	
	char *question1 = "What is output of following Code Snippet. \n #include<stdio.h> \n int main() \n { \n int *p = 15; \n printf(""%d"",*p); \n return 0; \n }";
	printf("All the Best for your Quiz..!! \n");

	printf("Q.1 %s \n \n", question1);
	printf("1. 15 \n 2. Garbage Value \n 3. Runtime Error \n 4. Compile Error \n");
	scanf("%d",&answer);

	if(3 == answer)
	{
		printf("Your answer is correct, you got 10 points \n");
		*result += 10;
	}
	else
	{
		printf("You Lost 5 points \n ");
		printf("Better Luck Next Time \n");
		*result -= 5;
	}
	system("cls");
	
	/* Question 2 */
	printf("Q.2 #include <somefile.h> are _______ files and #include “somefile.h” ________ files. \n");
	printf(" 1. Library, Library \n 2. Library, user-created header \n 3. User-created header, library \n 4. They can include all types of file	 \n");
	scanf("%d",&answer);

	if(4 == answer)
	{
		printf("Your answer is correct, you got 10 points \n");
		*result += 10;
	}
	else
	{
		printf("You Lost 5 points \n ");
		printf("Better Luck Next Time \n");
		*result -= 5;
	}
	system("cls");
	
	/* Question 3 */
	printf("Q.3 What is the advantage of #define over const? \n");
	printf(" 1. Data type is flexible \n 2. Can have a pointer \n 3. Reduction in the size of the program. \n 4. Both (a) and (c) \n");
	scanf("%d",&answer);

	if(1 == answer)
	{
		printf("Your answer is correct, you got 10 points \n");
		*result += 10;
	}
	else
	{
		printf("You Lost 5 points \n ");
		printf("Better Luck Next Time \n");
		*result -= 5;
	}
	system("cls");
		
	/* Question 4 */
	printf("Q.4 Which of the following does not initialize ptr to null (assuming variable declaration of a as int a=0;? \n");
	printf("1.int *ptr = &a – &a; \n");
	printf("2.int *ptr = &a; \n");
	printf("3.int *ptr = a – a; \n");	
	printf("4.All of the mentioned \n");
	scanf("%d",&answer);

	if(2 == answer)
	{
		printf("Your answer is correct, you got 10 points \n");
		*result += 10;
	}
	else
	{
		printf("You Lost 5 points \n ");
		printf("Better Luck Next Time \n");
		*result -= 5;
	}
	system("cls");
	
	/* Question 5 */
	printf("Q.5 Which is an indirection operator among the following? \n");
	printf(" 1. & \n 2. * \n 3. -> \n 4. . \n");
	scanf("%d",&answer);

	if(2 == answer)
	{
		printf("Your answer is correct, you got 10 points \n");
		*result += 10;
	}
	else
	{
		printf("You Lost 5 points \n ");
		printf("Better Luck Next Time \n");
		*result -= 5;
	}
	system("cls");
	
	/* Question 6 */
	printf("Q.6 A program that has no command line arguments will have argc.. \n");
	printf(" 1. Zero \n 2. Negative \n 3. One \n 4. Two \n");
	scanf("%d",&answer);

	if(3 == answer)
	{
		printf("Your answer is correct, you got 10 points \n");
		*result += 10;
	}
	else
	{
		printf("You Lost 5 points \n ");
		printf("Better Luck Next Time \n");
		*result -= 5;
	}
	system("cls");
	
	/* Question 7 */
	printf("Q.7 Which of the following expression is true for the following? \n");
    printf("ptr is array with 3 elements of pointer to function returning pointer of int  \n");
	printf("1.int **ptr[3](); \n");
	printf("2.int *(*ptr[3])(); \n");
	printf("3. int (*(*ptr[3])()); \n");	
	printf("4.None of the mentioned \n");
	scanf("%d",&answer);

	if(2 == answer)
	{
		printf("Your answer is correct, you got 10 points \n");
		*result += 10;
	}
	else
	{
		printf("You Lost 5 points \n ");
		printf("Better Luck Next Time \n");
		*result -= 5;
	}
	system("cls");

	/* Question 8 */
	printf("Q.8 Read the following expression? \n");
	printf(" void (*ptr)(int); \n");
	printf("1.ptr is pointer to int that converts its type to void \n");
	printf("2.ptr is pointer to function passing int returning void \n");
	printf("3.ptr is pointer to void that converts its type to int \n");	
	printf("4.ptr is pointer to function passing void returning int \n");
	scanf("%d",&answer);

	if(2 == answer)
	{
		printf("Your answer is correct, you got 10 points \n");
		*result += 10;
	}
	else
	{
		printf("You Lost 5 points \n ");
		printf("Better Luck Next Time \n");
		*result -= 5;
	}
	system("cls");
	
	/* Question 9 */
	printf("Q.9 Comment on the following declaration? \n");
    printf("int (*ptr)(); // i \n");
    printf("char *ptr[]; // ii \n");
    printf("1. Both i) and ii) and cannot exist due to same name\n");
	printf("2. i) is legal, ii) is illegal \n");
	printf("3. i) is illegal, ii) is legal \n");	
	printf("4.Both i) and ii) will work legal and flawlessly\n");
	scanf("%d",&answer);

	if(4 == answer)
	{
		printf("Your answer is correct, you got 10 points \n");
		*result += 10;
	}
	else
	{
		printf("You Lost 5 points \n ");
		printf("Better Luck Next Time \n");
		*result -= 5;
	}
	system("cls");
	
	/* Question 10 */
	printf("Q.10 Is the below declaration legal? \n");
    printf("int* ((*x)())[2]; \n");
    printf(" 1. true \n 2. false \n 3. Undefined behaviour \n 4. Depends on the standard \n");
	scanf("%d",&answer);

	if(2 == answer)
	{
		printf("Your answer is correct, you got 10 points \n");
		*result += 10;
	}
	else
	{
		printf("You Lost 5 points \n ");
		printf("Better Luck Next Time \n");
		*result -= 5;
	}
	system("cls");
	
	printf("\nQuiz Ends here. \n");
	printf("Your total Score is %f \n",*result);
	
	subject_selection(user.exit_status);
	
}
/* Programming Quiz Ends here   */

