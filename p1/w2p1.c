/*
	==================================================
	Workshop #2 (Part-1):
	==================================================
	Name   : Tuan Nguyen
	ID     : 109062166
	Email  : tnguyen140@myseneca.ca
	Section: NFF
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int toonies, loonies, quarters;
	double totalMoney, balance;
	printf("Change Maker Machine\n");
	printf("====================\n");
	printf("Enter dollars and cents amount to convert to coins: $");
	scanf("%lf", &totalMoney);
	balance = totalMoney;

	balance *= 100;
	toonies = (int)balance / 200;
	balance = (int)balance % 200;
	printf("\n$2.00 Toonies  X %d (remaining: $%.2lf)\n", toonies, balance/100);

	loonies = (int)balance / 100;
	balance = (int)balance % 100;
	printf("$1.00 Loonies  X %d (remaining: $%.2lf)\n", loonies, balance/100);

	quarters = (int)balance / 25;
	balance = (int)balance % 25;
	printf("$0.25 Quarters X %d (remaining: $%.2lf)\n", quarters, balance/100);
	printf("\nMachine error! Thank you for letting me keep $%.2lf!\n", balance/100);
	return 0;
}