/*** The main function implements the rudimentary Cash Register program
* The main initializes the application global variables and makes 
* function calls
*/

#include "CrudeCashRegister.h"
#include <stdio.h>

int itemName[MAXARRAYSIZE];
int itemQty[MAXARRAYSIZE];
int itemCount;

int main(void)
{
	// Declare variables

	// Initialize itemCount and grandTotal to have value 0
	itemCount = 0;
	grandTotal = 0;

	// Initialize itemName and itemQty to have value 0
	for (int n = 0; n < MAXARRAYSIZE; n++)
	{
		itemName[n]= 0;
		itemQty[n] = 0;
	}
		
	
	//while (1)
	//{
		UserPrompt();
		ComputeInput(itemCount);
		DisplayResult(grandTotal);
	//}

	return 0;
}