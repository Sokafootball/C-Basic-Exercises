//Find all the 90 degrees triangles which sides' sum is 500
#include <stdio.h>

int main(int argc, char **argv)
{
	int side1, side2, hypotenuse;
	
	for (hypotenuse = 1; hypotenuse <= 498; hypotenuse++)
	
		for (side1 = 1; side1 <= 498; side1++)		
	
			for(side2 = 1; side2 <= 498; side2++)
			{
				if(hypotenuse + side1 + side2 <= 500)
					if((side1 * side1 + side2 * side2) == hypotenuse * hypotenuse)
						printf ("Hypotenuse: %d Side 1: %d Side 2: %d\n\n", hypotenuse, side1, side2);
			}
	
	return 0;
}
