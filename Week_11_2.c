/*
 * two.c
 *
 *  Created on: Apr 9, 2021
 *      Author: Jeremy
 */

#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main()
{
	float compression;
	float areas, areaa, areac;
	float dias, diaa, diac;

	printf("what is the compression load you would like to calculate?\n"); fflush(stdout);
	scanf("%f", &compression);

	areas = compression / 25000;
	dias = 100 * (2 * sqrt(areas / PI));
	areaa = compression / 15000;
	diaa = 100 * (2 * sqrt(areaa / PI));
	areac = compression / 20000;
	diac = 100 * (2 * sqrt(areac / PI));

	if (compression > 15000 && compression <=20000) {
		printf("The load entered exceeds the allowable compression of aluminum. This wont be calculated \n");

		printf("Material:\tLoad:\t\tAllowable Stress:\tDiameter:\n");
		printf("Steel:\t\t%.0f\t\t25,000\t\t\t%.2fcm\n", compression, dias);
		printf("Copper:\t\t%.0f\t\t20,000\t\t\t%.2fcm\n", compression, diac);
	}
	else if (compression > 20000 && compression <=25000) {
		printf("The load entered exceeds the allowable compression of aluminum and copper. These wont be calculated \n");

		printf("Material:\tLoad:\t\tAllowable Stress:\tDiameter:\n");
		printf("Steel:\t\t%.0f\t\t25,000\t\t\t%.2fcm\n", compression, dias);
	}
	else if (compression > 25000) {
		printf("The load entered exceeds the allowable compression of steel, aluminum and copper. These wont be calculated \n");
	}
	else {
		printf("Material:\tLoad:\t\tAllowable Stress:\tDiameter:\n");
		printf("Steel:\t\t%.0f\t\t25,000\t\t\t%.2fcm\n", compression, dias);
		printf("Aluminum:\t%.0f\t\t25,000\t\t\t%.2fcm\n", compression, diaa);
		printf("Copper:\t\t%.0f\t\t20,000\t\t\t%.2fcm\n", compression, diac);
	}

}

