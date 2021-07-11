/*
	==================================================
	Workshop #2 (Part-2):
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
	int toonies, loonies, quarters, dimes, nickels, pennies;
	double totalMoney, balance, fee;
	printf("Change Maker Machine\n");
	printf("====================\n");
	printf("Enter dollars and cents amount to convert to coins: $");
	scanf("%lf", &totalMoney);
	fee = totalMoney * 0.05;
	printf("Service fee (5.0 percent): %.2lf\n", fee);
	balance = totalMoney - fee;
	printf("Balance to dispense: $%.2lf\n", balance);

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

	dimes	= (int)balance / 10;
	balance = (int)balance % 10;
	printf("$0.10 Dimes    X %d (remaining: $%.2lf)\n", dimes, balance/100);

	nickels = (int)balance / 5;
	balance = (int)balance % 5;
	printf("$0.05 Nickels  X %d (remaining: $%.2lf)\n", nickels, balance/100);

	pennies = (int)balance / 1;
	balance = (int)balance % 1;
	printf("$0.01 Pennies  X %d (remaining: $%.2lf)\n", pennies, balance/100);

	if(balance != 0)
		printf("\nNot all coins dispensed! Remaining balance: $%lf\n", balance);
	else
		printf("\nAll coins dispensed!\n");
	return 0;
}