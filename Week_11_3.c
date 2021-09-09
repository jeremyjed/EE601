/*
 * three.c
 *
 *  Created on: Apr 9, 2021
 *      Author: Jeremy
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int amps, volts, weight, rate;
	float Pwin, HPin, HPout, eff;

	amps = 15;
	volts = 220;
	weight = 2000;
	rate = 50;

	Pwin = amps * volts;
	HPin = 1.34 * (Pwin/1000);
	HPout = (weight * rate) / 33000;

	eff = 100 * (HPout / HPin);

	printf("The Power Input in Horsepower of a motor running %damps on %dvolts is:   ", amps, volts);
	printf("%.2fHP\n\n", HPin);

	printf("The Power Output in Horsepower of this motor lifting %dlbs %dft/min is:   ", weight, rate);
	printf("%.2fHP\n\n", HPout);

	printf("The efficiency of this motor is: %.2f%%", eff);
}
