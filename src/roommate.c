#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	printf("%s", "Enter the number week in the month 1-4 (e.g. 3 for 3rd week of Sept:)\n");
	char week = '~';
	week = (char)getc(stdin);
	if(week > '4' || week == '0' || week == 10)
	{
		printf("%s", "Invalid input. Input should be a digit between 1 and 4 (inclusive).\n");
		exit(1);
	}
	char* name[4];
	name[0] = "Tim Chartier";
	name[1] = "Chris Szafranski";
	name[2] = "Keith Mosher";
	name[3] = "John Lim";

	char* duties[4];
	duties[0] = "Living Room";
	duties[1] = "Kitchen";
	duties[2] = "Bathroom";
	duties[3] = "Sink";
	printf("%s", "----------------------------------------\n");
	week-='1';
	for(int i = week; i < 4+week; i++)
	{
		printf("%s", name[i%4]);
		printf("%s", ": ");
		printf("%s", duties[i%4]);
		printf("%c", '\n');
	}
	return 0;
}