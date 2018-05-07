/***********************************************************************************************
Created By: Monisha Surana
Contact Id: monishasurana1@gmail.com
CopyRights Reserved @ Monisha Surana
Date of Creation: 24 - August - 2017
Date of Last Modification: 30 - August - 2017

Programme Brief: Web Development MCQ Quiz
************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#include"variable_function.h"

#ifndef MAX
#define MAX 30
#endif

#ifndef HELP
#define HELP "All questions require a number as an answer. \nSome questions ask for a one-digit answer and others a two-digit number. \nAn example of a question that requires a one-digit number as an answer could be: 1 = What colour is grass.\nIn this case, you would type '1' to choose this answer. Here is an example of a possible answer of a question which requires a two - digit number as an answer: 74. \nNotice that there is no '=' or words, but just a number unlike a question that asks for a one-digit number as an answer."
#endif

/* Web Develoment Quiz starts here */
void web_development_quiz(float *result)
{
	*result = 0;
	
	system("cls");
	
	printf("All the Best for your Quiz..!!");	
	
	/* Question 1 */
	printf("Q.1 What does HTML stands for ? \n");
	printf("1. Hyper Text Markup Language \n");	
	printf("2. Hyper Text processor Language \n");
	printf("3. Hyper Text scripting Language \n");
	printf("4. Hyper Text programming Language \n");
	scanf("%d",&answer);

	if(answer == 1)
	{
		printf("You got 10 points. \n");
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
	printf("Q.2 Arrange the following devices in ascending order of the speed :A.Ram B.Hard disk C.Cache D.Floppy \n ");
	printf("1.ABDC\n2.BDAC\n3.DBAC\n4.BADC \n");
	scanf("%d",&answer);

	if(3 == answer)
	{
		printf("You got 10 points. \n");
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
	printf("Q.3  How do you insert a copyright symbol on a browser page? \n");
	printf("1.&copy;\n2.&#169;\n3.Both A and B\n4.None of these. \n");
	scanf("%d",&answer);
	
	if(3 == answer)
	{
		printf("You got 10 points. \n");
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
	printf("Q.4 Fundamental HTML Block is known as ? \n");
	printf("1.HTML Body\n2.HTML Tag\n3.HTML Element\n4.HTML Attribute\n");
	scanf("%d",&answer);
	
	if(2 == answer)
	{
		printf("You got 10 points. \n");
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
	printf("Q.5 Apart from <b> tag, what other tag makes text bold ? \n");
	printf("1.<fat>\n2.<emp>\n3.<bold>\n4.<strong>\n");
	scanf("%d",&answer);
	
	if(2 == answer)
	{
		printf("You got 10 points. \n");
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
	printf("Q.6 How can you make a bulleted list with numbers?\n");
	printf("1.<dl>\n2.<list>\n3.<ol>\n4.<ul>\n");
	scanf("%d",&answer);
	
	if(3 == answer)
	{
		printf("You got 10 points. \n");
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
	printf("Q.7 Tags and text that are not directly displayed on the page are written in which section.\n");
	printf("1.<head>\n2.<title>\n3.<body>\n4.<html>\n");
	scanf("%d",&answer);
	
	if(1 == answer)
	{
		printf("You got 10 points. \n");
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
	printf("Q.8 HTML web pages can be read and rendered by: \n");
	printf("1.Compiler\n2.Server\n3.Web-Browser\n4.Interpreter\n");
	scanf("%d",&answer);
	
	if(3 == answer)
	{
		printf("You got 10 points. \n");
		*result += 10;	
	}
	else
	{
		printf("You Lost 5 points \n ");
		printf("Better Luck Next Time \n");
		*result -= 5;
	}
	system("cls");
	
	/* Question 9*/
	printf("Q.9 HTML is what type of language ? \n");
	printf("1.Scripting Language\n2.Markup Language\n3.Programming Language\n4.Network Protocol\n");
	scanf("%d",&answer);
	
	if(2 == answer)
	{
		printf("You got 10 points. \n");
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
	printf("Q.10 Who is Known as the father of World Wide Web (WWW)? \n");
	printf("1.Robert Cailliau\n2.Tim Thompson\n3.Charles Darwin\n4.Tim Berners-Lee\n");
	scanf("%d",&answer);
	
	if(4 == answer)
	{
		printf("You got 10 points. \n");
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
/* Web Develoment Quiz Ends here   */

