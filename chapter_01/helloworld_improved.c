#include <stdio.h>
#include <stdlib.h>

int main() {

	if (puts("Hello world (improved!)") == EOF) {
			return EXIT_FAILURE;
			// this code never executes.
			// EOF is a negative integer value which puts() only returns if something in puts() fails.
		}
	return EXIT_SUCCESS;
}
