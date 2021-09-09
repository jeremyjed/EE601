/*
 * main.c
 *
 *  Created on: Apr 18, 2021
 *      Author: Jeremy
 */

#include <stdio.h>
//declares the universal variables
float V, P, T, M;
int flag;
int funcinput(float *, float *, float *);

//Calculation function
float CalcM (float V, float P, float T) {
		M = ((P * V) / (0.42 * (T + 460)));
	return M;
}


//print function
void display(float V, float P, float T, float M)
{

printf("A ballon inflated to %f cuft, at %f PSI, and at %f degrees will have a mass of %f\n", V, P, T, M);

}

//function to read data from datex.dat
int funcinput(float *V, float *P, float *T) {
	flag = 0;
	FILE *inptr;

	inptr = fopen("datex.dat", "r");
	if (fscanf(inptr, "%f %f %f", V, P, T) != EOF)
		flag = 1;

	return flag;
}

//main function
int main() {
	flag = funcinput(&V, &P, &T);
	M = CalcM(P, V, T);
	if (flag)
		display(V, P, T, M);
	else
		printf("Error in input\n");
	return 0;
}

