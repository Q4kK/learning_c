#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void)
{	
	// define vars
	float input;
	float area;
	float pi = PI;
	
	// get input
	printf("Enter the radius of your circle: ");
	scanf("%f", &input);
	
	// calculate area
	area = pi * (input * input);
	
	// print output
	printf("The area of your circle is %f", area);
}
