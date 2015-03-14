// Author:                      Lyle Denman
// Assignment:                  ProjectEuler 001
// Date:                    	3/13/2015

/* If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000. */

#include <iostream>

/***************
*     MAIN     *
***************/
int main()
{
	const int MAX = 1000;
	
	int sumOfMultiples = 0;	
	
	for (int i = 1; i < MAX; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sumOfMultiples += i;
		} 
	}
	
	std::cout << sumOfMultiples << std::endl;
	
    return 0;
} // end of main
