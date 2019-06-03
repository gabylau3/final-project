#include <stdio.h>
#include <string.h>

int score= 0;

struct Animal {
	char Q1[200];
	char Q2[200];
	char Q3[200];
};

int main()
{

	printf("Welcome to the music quiz!\n");

 	char input [200];
	char name [200];

	printf("What is your name?\n");
	fgets (input, 200, stdin);
	sscanf(input, "%s", &name);
	
	
}
