/*
 * main.c
 *
 *  Created on: Apr 18, 2021
 *      Author: Jeremy
 */

#include <stdio.h>

//Calculates the amount of steel needed for a box
float steel(float l, float w, float h, float tw, float tf) {
	//volume of a box
	float inner = l * w * h;
	//volume of a larger box accounting for wall and floor thickness
	float outer = (l+2*tw) * (w+2*tw) * (h+2*tf);

	//subtracts the smaller volume from the larger, leaving just the volume of the walls
	float calculation = (outer - inner) / 5;

	return(calculation);
}

//Calculates the amount of concrete needed for a cube
float concrete(float l, float w, float h, float tw, float tf) {
	//volume of a box
	float inner = l * w * h;
	//volume of a larger box accounting for wall and floor thickness
	float outer = (l+2*tw) * (w+2*tw) * (h+2*tf);

	//subtracts the smaller volume from the larger, leaving just the volume of the walls
	float calculation = ((outer - inner) *4) / 5;

	return(calculation);
}

//Prints the two answers
void print(float l, float w, float h, float tw, float tf) {
	printf("\n%.2f cuft of Steel is required for this tank.", steel(l, w, h, tw, tf));
	printf("\n%.2f cuft of Concrete is required for this tank.", concrete(l, w, h, tw, tf));
}

int main() {
	float l, w, h;
	float tw, tf;

	//User inputs the required data
	printf("Enter the length:"); fflush(stdout);
	scanf("%f", &l);
	printf("Enter the width:"); fflush(stdout);
	scanf("%f", &w);
	printf("Enter the height:"); fflush(stdout);
	scanf("%f", &h);
	printf("Enter the wall thickness:"); fflush(stdout);
	scanf("%f", &tw);
	printf("Enter the floor thickness:"); fflush(stdout);
	scanf("%f", &tf);

	//Runs the print function
	print(l, w, h, tw, tf);
}
