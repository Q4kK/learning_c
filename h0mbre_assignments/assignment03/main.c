#include <stdlib.h>
#include <stdio.h>

int main(void)
{	
	// initialize vars
	char *firstname;
	char *lastname;
	int return1, return2;

	printf("Please enter your first and last name: ");
	
	return1 = scanf("%ms", &firstname);
	return2 = scanf("%ms", &lastname);

	if (return1 == EOF || return2 == EOF)
		exit(1);

	printf("Hello %s %s!\n", firstname, lastname);

	free(firstname);
	free(lastname);
}
