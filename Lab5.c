#include <stdio.h>
#include <stdlib.h>

#define VALUE 4096

int main(int argc, char** argv) {

	unsigned long address_number;
	unsigned long offset;
	unsigned long page_number;
	
	address_number = strtoul(argv[1], NULL, 10);

	printf("The address %lu contains: \n", address_number);

	page_number = address_number / VALUE;

	printf("Page Number = %lu \n", page_number);

	offset = address_number%VALUE;

	printf("Offset = %lu \n", offset);

	return 0;
}