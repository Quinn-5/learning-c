#include <stdio.h>
#include <string.h>

int main() {
	char str_a[20]; // A 20-element character array
	char *pointer1; // A pointer, meant for a char array
	char *pointer2; // Another pointer

	strcpy(str_a, "Hello, world!\n");
	pointer1 = str_a; // Set first pointer to start of array
	printf(pointer1);

	pointer2 = pointer1 + 2; // Set second one 2 bytes further in.
	printf(pointer2);	// Print it.
	strcpy(pointer2, "y you guys!\n"); // Copy into that spot
	printf(pointer1);	// Print again.
	printf(str_a);
}
