/* This header file contains the functions prototypes and data type definitions
* used for rudimentary cash register application
*/


//#pragma once
#ifndef CRUDE_CASH_REGISTER_H
#define CRUDE_CASH_REGISTER_H

#define PRICECOKE		25
#define PRICESARDI		20
#define PRICESUGAR		100
#define MAXARRAYSIZE	50


extern int itemName[MAXARRAYSIZE];
extern int itemQty[MAXARRAYSIZE];
extern int itemCount;
extern int grandTotal;


////////////////////////////////////////////////////////////////
// Application Initialization								  //
////////////////////////////////////////////////////////////////

/*Initialization for each function is implemented at each source file
* see on each source file first lines
*/




////////////////////////////////////////////////////////////////
// Function Prototypes										  //
////////////////////////////////////////////////////////////////

int UserPrompt(void);
int ComputeInput(int itemS);
int DisplayResult(int grandT);
int PrintReceipt(int itemN, float tenderA, float changeA);


#endif // !CRUDE_CASH_REGISTER_H

