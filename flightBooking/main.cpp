//a flight booking system in a 10 seats airplane
//seats from 1 to 5 are for smokers, 6 to 10 is a non smoking area
#include <stdio.h>
#define SIZE 11

int checkSeat (int seats[], int area);
int doubleCheck (int seats[], int area);
void printBoardingPass (int seat);

int main(int argc, char **argv)
{
	//variables
	int plane[SIZE] = {0}, smoking = 1, seatFound = 0;
	
	//Take input
	while (smoking != 0)
	{
		printf ("Please type 1 for \"smoking\"");
		printf ("\nPlease type 2 for \"nonsmoking\"");
		printf ("\nPlease type 0 to exit\n");
		scanf("%d", &smoking);
		
		if (smoking != 0)
		{
			seatFound = checkSeat(plane, smoking - 1);
			//if no seat was found in the area
			if (seatFound == 0) 
			{
				//check if customer want one in the other area
				seatFound = doubleCheck(plane, smoking - 1); 
			}
			//if a seat was found
			if(seatFound != 0)
				printBoardingPass(seatFound);
			//if it wasn't
			else	
				printf("Sorry, the plane is full! Next flight will be in 3 hours.\n\n");
		}
	}
	
	return 0;
}

//return 0 if no seat was found, otherwise the number of the seat
int checkSeat (int seats[], int area)
{		
	int start = 5 * area + 1;
	int end = 5 * area + 5;
	
	for (start; start <= end; start++)
		{
			if (seats[start] == 0) //if the seat is free
			{
				seats[start] = 1;
				return start;
			}
		}
		
	return 0;			
}

int doubleCheck (int seats[], int area)
{
	int selection;
	
	if (area == 0)
		area = 1;
	else
		area = 0;
	
	printf("There was no free seat in the selected area.\n");
	printf("Would you like to check for availability in the other one?\nType 1 for Yes or 2 for No.\n");
	scanf("%d", &selection);
	
	if (selection == 1)
		return checkSeat(seats, area);
	else
		("Sorry about that, next flight will be in 3 hours.\n\n");
	
	return 0;		
}

void printBoardingPass (int seat)
{
	if (seat > 5)
		printf("You will be seating in seat number %d in the nonsmoking area.\n\n", seat);
		
	else
		printf("You will be seating in seat number %d in the smoking area.\n\n", seat);
	
	return;
}