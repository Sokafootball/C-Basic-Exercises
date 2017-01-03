//roll 2d6 36.000 times and print the frequencies of each result
#include <stdio.h>
#include <stdlib.h>
#define SIZE 13

int main(int argc, char **argv)
{
	//DECLARATION
	//functions
	int roll ();
	
	//variables
	int frequencies[SIZE] = {0}, rolls;
	
	//PROCESS
	//do the rolls
	for (rolls = 1; rolls <= 36000; rolls++)
	{
		frequencies[roll()]++;
	}	
	
	//OUTPUT
	printf("%s%15s", "RESULT", "FREQUENCY");
	
	for (int i = 2; i <= SIZE - 1; i++)
	{
		printf("\n%6d%15d", i, frequencies[i]);
	}
	
	return 0;
}

int roll()
{
	//DECLARATION
	int roll1, roll2;
	roll1 = rand() % 6 + 1;
	roll2 = rand() % 6 + 1;
	
	return roll1 + roll2;
}