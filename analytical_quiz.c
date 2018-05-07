/***********************************************************************************************
Created By: Monisha Surana
Contact Id: monishasurana1@gmail.com
CopyRights Reserved @ Monisha Surana
Date of Creation: 24 - August - 2017
Date of Last Modification: 30 - August - 2017

Programme Brief: Analyitical Skills MCQ Quiz
************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"variable_function.h"

#ifndef HELP
#define HELP "All questions require a number as an answer. \nSome questions ask for a one-digit answer and others a two-digit number. \nAn example of a question that requires a one-digit number as an answer could be: 1 = What colour is grass.\nIn this case, you would type '1' to choose this answer. Here is an example of a possible answer of a question which requires a two - digit number as an answer: 74. \nNotice that there is no '=' or words, but just a number unlike a question that asks for a one-digit number as an answer."
#endif

/* Analytical Skills Quiz start here   */
void analytical_skills(float *result)
{
	*result = 0;
	
	printf("All the Best for your Quiz..!!");
	
	system("cls");
	/* Question 1*/
	printf("Q.1 If in a certain code, MICROWAVE is written as LJBSNXZWD, how is POPULAR written in that code? \n");
	printf(" 1. QBIKVPAV \n 2. OPKVPAV \n 3. OPOVKBQ \n 4. KBQVOPA \n");
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


	/* Question 2*/
	printf("Q.2 If REASON is coded as 5 and BELIEVED as 7, then what is the code for GOVERNMENT? \n");
	printf(" 1. 10 \n 2. 9 \n 3. 8 \n 4. 6 \n");
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

	/* Question 3*/
	printf("Q.3 Six persons A, B, C, D, E and F are standing in a circle.");
	printf("B is standing between F and C. A is standing between E and D.");
	printf("F is standing to the left of D. Who is standing between A and F?\n");
	
	printf(" 1. B \n 2. C \n 3. D \n 4. E \n");
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
	printf("Q.4 If SUNDAY is coded as 012345 and BIG is coded as 678, then how will SANDBAY be coded in the same code? \n");
	printf(" 1. 0234456 \n 2. 0423645 \n 3. 0432645 \n 4. 0342456 \n");
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
	printf("Q.5 If A is the father of B and B is the mother of C and C is the daughter of D, then what is the relation between A and D? \n");
	printf(" 1. Son-in-Law \n 2. Brother-in-Law \n 3. Sister-in-Law \n 4. Father-in-Law \n");
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
	
	/* Question 6 */
	printf("Q.6 Pointing to a photograph Prakash said, aHe is the son of the only daughter of the father of my brother.");
	printf("How Prakash is related to the man in the photograph?\n");
	printf(" 1. Maternal Uncle \n 2. Brother \n 3. Nephew \n 4. Cousion \n");
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
	
	/* Question 7 */
	printf("Q.7 Arun said, This girl is the wife of the grandson of my mother. Who is Arun to the girl? \n");
	printf(" 1. Grandfather \n 2. Husband \n 3. Father-in-law \n 4. Father \n");
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
	
	/* Question 8 */
	printf("Q.8 Rahul travelled from a point and straight to Y at a distance of 90 m.");
	printf("He turned right and walked 40 m, then again turned right and walked 70 m.");
	printf("Finally, he turned right and walked 40 m. How far he is from the starting point? \n");
	printf(" 1. 70 \n 2. 10 \n 3. 30 \n 4. 20 \n");
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

	/* Question 9 */
	printf("Q.9 Seema walks 30 m North. Then she turns right and walks 30 m then she turns right and walks 55 m.");
	printf("Then she turns left and walks 20 m. Then she again turns left and walks 25 m.");
	printf("How many metres away is she from her original position? \n");
	printf(" 1. 45 m \n 2. 50 m \n 3. 55 m \n 4. 60 m \n");
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
		
	/* Question 10 */
	printf("Q.10 A series is given, with one number/letter missing. ");
	printf("Choose the correct alternative from the given ones that will complete the series? \n");
	printf("138, 142, 146, 150, ?, 142, 138 \n");
	printf(" 1. 148  \n 2. 140 \n 3. 146 \n 4. 144 \n");
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
	
	printf("\nQuiz Ends here. \n");
	printf("Your total Score is %f \n",*result);
	
	subject_selection(user.exit_status);
}
/* Analytical Skills Quiz Ends here   */
