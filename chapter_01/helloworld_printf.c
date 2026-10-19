#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("%s\n", "Hello world (with printf!)");
	// the %s is a conversion specification that says to print the next argument (string literal) to the stdout (terminal). 
	// the \n says to print a new line AFTER printing the string literal (hence AFTER  %s). If \n was before %s (i.e.: \n%s), then the new line would be placed BEFORE the string literal.
	// EOF is a negative integer value which puts() only returns if something in puts() fails.
		
	return EXIT_SUCCESS;
}
