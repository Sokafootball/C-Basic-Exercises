//print all perfect numbers between 1 and 1000. 
//A perfect number is a number which factors' sum is equal to that number.
#include <stdio.h>

int main(int argc, char **argv)
{
	//DECLARATION
	//functions
	void perfect (int n);
	
	//OUTPUT
	for (int i = 1; i <= 10000; i++)
	{
		perfect (i);			
	}
	
	return 0;
}

void perfect (int n)
{
	//DECLARATION
	int sum = 0;
	
	//OUTPUT
	//check if number is perfect
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)		
			sum += i;		
	}
	
	//if it's perfect print its factors
	if (sum == n)
	{
		printf("%d: ", n);	
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
				printf("%d ", i);
		}
		printf("\n");
	}
	return;
}

