/***********************************************************************************************
Created By: Monisha Surana
Contact Id: monisha.surana1@gmail.com
CopyRights Reserved @ Monisha Surana
Date of Creation: 24 - August - 2017
Date of Last Modification: 30 - August - 2017

Programme Brief: Extern Variable & Functions Declaration 
************************************************************************************************/
#ifndef MAX
#define MAX 30
#endif

/* Structure Declaration For storing User's Name and Age */
typedef struct
{
unsigned int age;
int name_len;
char fname[MAX];						/* Temporaray Array Structure declaration of validating name is user inputs digit also.*/
char lname[MAX];						/* Array Structure declaration for storing Last name */
char exit_status;
}userinfo;
/* Structure Declaration Ends and Variable Declared userinfo */

/* Function Prototypes Declaration in Header File */

void name_validate(char *,char *);				/* Function Prototype for valiadating name  */

void convert_upper(char *);						/* Function Prototype for Converting Name into Upper Case */

void convert_lower(char *);						/* Function Prototype for Converting Name into Lower Case */

// void concat_name(char *);				/* Function Prototype for Concatinating First and Last Name */

// void username_compare(char *);			/* Function Prototype for entering user_information */

void *web_development_quiz(float*);				/* Function Prototype for Web Developement Quiz */
	
void programming_c_quiz(float*);				/* Function Prototype for C Programming Quiz */

void analytical_skills(float*);					/* Function Prototype for Analytical Skills Quiz  */

void communication_skills(float*);				/* Function Prototype for Communication Skills Quiz  */

int namevalidate(char *);						/* Function Prototype for Validating First & Last Name */

/* Global Variable Declaration in Header File */

extern const char *subject1;				/* Subject 1 stores Web Development as subject */
extern const char *subject2;			/* Subject 2 stores Programming in C as subject */
extern const char *subject3;			/* Subject 3 stores Analytical Skills as subject */
extern const char *subject4;		/* Subject 4 stores Communication Skills as subject */
extern int select_subject;									/* Subject selection */

extern int answer;	
extern unsigned int correct_answer ; 
extern signed int wrong_answer ;
extern float result;
extern int change_upper;			/* To convert user name into uppercase letters */
extern int change_lower;			/* To convert user name into Lowercase letters */
extern int flag;
extern char exit_status;


