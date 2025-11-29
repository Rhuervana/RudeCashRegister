/*** This function gets input from user for product item and quantity
* It also ask user for additional item, if none, calls ComputeInput function
*/

#include "CrudeCashRegister.h"
#include <stdio.h>
#include <stdbool.h>

int itemName[MAXARRAYSIZE];
int itemQty[MAXARRAYSIZE];
int itemCount;


int UserPrompt(void)
{
	// Declare variables
	bool isAddItem = true;
	char itemCh, ch;
	
	// Prompt user for input
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("The following items are available for purchase: \n");
	printf("\t(C)oke, price is P25/bottle\n");
	printf("\t(S)ardines, price is P20/can\n");
	printf("\t(G)sugar, price is P100/kg\n\n");

	do
	{
		printf("\n\n");
		printf("Enter Item name, press letter and Enter: \n");
		printf("\t(C) for Coke \n");
		printf("\t(S) for Sardines \n");
		printf("\t(G) for Sugar \n");
		printf("\t ");

		
		while ((itemCh = getchar()) != '\n')
		{
			switch (itemCh)
			{
				case 'C':
				case 'c':
					itemName[itemCount] = 1;							// Coke
					printf("\nEnter item quantity: ");
					scanf_s("%d", &itemQty[itemCount]);
					break;

					case 'S':
					case 's':
						itemName[itemCount] = 2;						// Sardines
						printf("\nEnter item quantity: ");
						scanf_s("%d", &itemQty[itemCount]);
						break;

					case 'G':
					case 'g':
						itemName[itemCount] = 3;						// Sugar
						printf("\nEnter item quantity: ");
						scanf_s("%d", &itemQty[itemCount]);
						break;

					default:
						// Error message
						itemName[itemCount] = 0;						//for Invalid item name
						printf("Error. Please input valid item name: ");
						break;
			}			
		} 		

		printf("\nAdd more item? Press (Y) to continue, (N) to end: ");
		
		while ((ch = getchar()) != '\n')
		{ 
			switch (ch)
			{
				case 'N':
				case 'n':
					isAddItem = !isAddItem;
					break;

				case 'Y':
				case 'y':
					++itemCount;
					break;
				
				default:
					// Error message
					printf("Please input valid (Y) or (N) only\n");
					printf("Using default item quantity 1 for invalid input\n");
					
					itemCount = 0;										// Error defaults quantity to 1
					isAddItem = !isAddItem;								// then exits the user prompt
					break;
			}
		}	

	} while (isAddItem);


	//printf("\nitemCount is %d\n", itemCount);
	return 0;
}
	