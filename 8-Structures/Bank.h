#pragma once
struct piggybank
{
	int dollarBills;
	int twoBills;
	int fiveDollar;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

};
float calcPiggybankNotes(piggybank piggy);

float calcPiggybankCoins(piggybank piggy);

float calcPiggybankTotal(piggybank piggy);