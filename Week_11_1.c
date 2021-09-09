/*
 * one.c
 *
 *  Created on: Apr 9, 2021
 *      Author: Jeremy
 */

#include <stdio.h>

int main()
{
	int num1, num2;
	int quantity1, quantity2;
	float cost1, cost2, total1, total2, total;

	printf("What is the item number for part 1?"); fflush(stdout);
	scanf("%d", &num1);

	printf("How many would you like to order?"); fflush(stdout);
	scanf("%d", &quantity1);

	printf("What is the cost per unit?"); fflush(stdout);
	scanf("%f", &cost1);

	printf("What is the item number for part 2?"); fflush(stdout);
	scanf("%d", &num2);

	printf("How many would you like to order?"); fflush(stdout);
	scanf("%d", &quantity2);

	printf("What is the cost per unit?"); fflush(stdout);
	scanf("%f", &cost2);

	total1 = (cost1 * quantity1);
	total2 = (cost2 * quantity2);
	total = (cost1 * quantity1) + (cost2 * quantity2);

	printf("Item Num:\tQuantity:\tCost:\t\tTotal:\n");
	printf("%d\t\t%d\t\t$%.2f\t\t$%.2f \n", num1, quantity1, cost1, total1);
	printf("%d\t\t%d\t\t$%.2f\t\t$%.2f \n", num2, quantity2, cost2, total2);
	printf("Total:\t\t\t\t\t\t$%.2f", total);
}
