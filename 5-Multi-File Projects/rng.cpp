#include "rng.h"
void seedRng(int seed)
{
	srand(seed);
}

int rng()
{
	return rand() % 100 + 1;
}

int rngRange(int min, int max)
{	
	return rand() % max + min
}

bool rngb()
{
	return rand() % 1;
}

bool rngBchance(int chance)
{	int random = rand() % 100 + 1

if(random <= chance)
{
	return true;
	}
else 
{
	return false;
}
	
}
