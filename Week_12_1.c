/*
 * main.c
 *
 *  Created on: Apr 18, 2021
 *      Author: Jeremy
 */

/*
 * main.c
 *
 *  Created on: Apr 18, 2021
 *      Author: Jeremy
 */

#include <stdio.h>
#include <math.h>

//Calculates the Stress
float StressCalc(float load, float dia)
{

float area, stress;

//Calculates area
area = (M_PI * pow(dia, 2)) / 4;

//Calculates stress
stress = load / area;
return stress;

}

//Calculates the Strain
float StrainCalc(float stress, float elasticity)
{

	float strain;

//Calculates strain
strain = stress / elasticity;
return strain;

}

//Display function
void display(float stress, float strain, int l)
{

printf("For a compression load of %d pounds the Stress is %f, and the Strain is %f\n", l,
stress, strain);

}

// main function
int main()
{
float diameter, stress, strain;
int l;
const int elasticity = 30 * pow(10, 6);
printf("Enter the diameter: "); fflush(stdout);
scanf("%f", &diameter);

// loop for each calculation
for (l = 10000; l <= 1000000; l += 100000)
{

//Calls StressCalc
stress = StressCalc(l, diameter);

//Calls StrainCalc
strain = StrainCalc(stress, elasticity);

//Calls display
display(stress, strain, l);
}

return 0;

}


