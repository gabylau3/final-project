#include <stdio.h>
#include <string.h>

int score= 0;

struct Animal  {

	char Q1[200];
	char Q2[200];
	char Q3[200];
};

int main()
{

	printf("Welcome to the music quiz!\n");

	int score= 0;
 	char input [200];
	char name [200];
	char A1astr[20] = "exposition";
	char A1bstr[20];
	int Answer;

	printf("What is your name?\n");
	fgets(input, 200, stdin);
	sscanf(input, "%s", &name);

	printf("Q1: What is the name of the first section of a sonata?\n");
	fgets(input, 200, stdin);
	sscanf(input, "%s", &A1bstr);
	if (strcmp(A1astr, A1bstr) == 0)
		score = score + 1;

	//printf("Q2: What musical period was Chopin in?\n");
	//fgets(input, 200, stdin);

	printf("Q3: There are eight trumpets in a brass choir. There must be at least half the trombones as trumpets. How many trombones can there be if the choir has 47 trumpets?\n");
	fgets(input, 200, stdin);
	if (sscanf(input, "%d", &Answer) >= 24)
		score = score + 1;

	printf("Go to this website to check your score and compare it to others: \n"); 
}

