#include "Bank.h"

int sum;
float calcPiggybankNotes(piggybank piggy)
{
	
		return piggy.dollarBills +
		piggy.twoBills * 2 +
		piggy.fiveDollar * 5;
}

float calcPiggybankCoins(piggybank piggy)
{	
		
		return piggy.pennies; +
		piggy.nickels * 0.05f +
		piggy.dimes * 0.1f +
		piggy.quarters * 0.25f;
}

float calcPiggybankTotal(piggybank piggy)
{
	
	return calcPiggybankCoins(piggy) + calcPiggybankNotes(piggy);

}
