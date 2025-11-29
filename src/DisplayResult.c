/*** This function displays the total price to be paid by buyer
* then accounts for the change to be returned
*/

#include "CrudeCashRegister.h"
#include <stdio.h>
#include <string.h>

int itemName[MAXARRAYSIZE];
int grandTotal;


int DisplayResult(int grandT)
{
	// Declare variable and initialize
	float tenderAmt, changeAmt = 0.0;

	if (grandT > 0)
	{
		printf("\n\nGrand total is: %d", grandT);
		
		printf("\n\n\n\nYou tendered?: ");
		scanf_s("%f", &tenderAmt);

		changeAmt = tenderAmt - (float)grandT;

		if (tenderAmt - (float)grandT < 0.0)
		{
			printf("\n\n\n\nInsufficient amount tendered! ");
			printf("\nTransaction cancelled...\n\n\n\n");
		}

		else
		{
			printf("\n\n\n\nYour change is: %.2f", changeAmt);
			printf("\nThank you...\n\n\n\n");
		}
	}

	else
	{
		// Error
		printf("\n\nNo items purchased. Thank you...\n\n\n\n");
	}


	PrintReceipt(grandTotal, tenderAmt, changeAmt);

	return 0;
}


// Display printable receipt
int PrintReceipt(int itemN, float tenderA, float changeA)
{
			
	printf("\n\n\t%10s    \t%8s\t%10s\n", "ItemNo", "ItemQty", "Unit Price");
	for (int n = 0; n < itemN+ 1; n++)
	{		
		switch (itemName[n])
		{
			case 1:
				printf("\t------------------------------------------------------\n");
				printf("\t %10s\t     %5d\t       %3d\n", "Coke", itemQty[n], PRICECOKE);
				break;

			case 2:
				printf("\t------------------------------------------------------\n");
				printf("\t %10s\t     %5d\t       %3d\n", "Sardines", itemQty[n], PRICESARDI);
				break;

			case 3:
				printf("\t------------------------------------------------------\n");
				printf("\t %10s\t     %5d kg\t      %3d\n", "Sugar", itemQty[n], PRICESUGAR);
				break;
			
			default:
				break;
		}
		
	}

	printf("\n\n");
	printf("\t------------------------------------------------------\n");
	printf("\t\t\t%14s   %5.2f", "Total:", (float)grandTotal);
	printf("\n");
	printf("\t\t\t%14s   %5.2f", "You tendered:", tenderA);
	printf("\n");
	printf("\t\t\t\%14s    %5.2f", "Your change:", changeA);
	printf("\n\n");

	return 0;
}