/*** This function accepts argument of Item size(number of product items)
* and computes price Grand total for the purchase
*/

#include "CrudeCashRegister.h"
#include <stdio.h>

int itemName[MAXARRAYSIZE];
int itemQty[MAXARRAYSIZE];

int grandTotal;


int ComputeInput(int itemS)
{
	// Declare variables and initialize
	int subTotal[MAXARRAYSIZE];
	
	// Initialize subTotal contents to 0
	for (int m = 0; m < MAXARRAYSIZE; m++)
		subTotal[m] = 0;


	printf("\nComputing total for %d item(s)...\n\n", itemS + 1);
	//printf("itemQty is %d\n", itemQty[itemS]);
	for (int n = 0; n < itemS + 1; n++)
	{
		if (itemName[n] != 0)
		{
			if (itemName[n] == 1)
			{
				subTotal[n] = PRICECOKE * itemQty[n];
				//printf("\nCoke subTotal: %d", subTotal[n]);
			}

			if (itemName[n] == 2)
			{
				subTotal[n] = PRICESARDI * itemQty[n];
				//printf("\nSardines subTotal: %d", subTotal[n]);
			}

			if (itemName[n] == 3)
			{
				subTotal[n] = PRICESUGAR * itemQty[n];
				//printf("\nSugar subTotal: %d", subTotal[n]);
			}
		}
		else
			subTotal[n] = 0;							// subTotal = 0 for invalid input for itemName
	}

	for (int n = 0; n < itemS + 1; n++)
	{ 
		grandTotal += subTotal[n];
		//printf("\nRunning Grand Total: %d", grandTotal);
	}
	//DisplayResult(grandTotal);
	//return grandTotal;
	
	return 0;
}