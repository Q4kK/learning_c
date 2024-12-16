#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// initialize leftover nums
	int leftover;

	
	// get seconds
	printf("Enter the amount of seconds: \n");
	int seconds;
	scanf("%d", &seconds);
	
	// debug
	printf("%d", seconds % 60);

	// convert to time
	int hours = seconds % (60 * 60);
	leftover = seconds - (hours * 60 * 60);
	int minutes = leftover % (60);
	leftover = seconds - (minutes * 60);

	// print out everything
	printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.", seconds, hours, minutes, leftover);
	return 0;
}
