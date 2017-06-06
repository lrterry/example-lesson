#include <stdio.h>

int main(int argc, char** argv) {
	if(argc < 2) {
		printf("Error, one argument required.\nPlease enter a word to be printed to the console.\n");
		return 1;
	} else if(argc > 2) {
		printf("Error, too many arguments. This program only requires a single argument.\n");
		return 2;
	}
	printf("Hello world on the way. \n");	
	printf("%s\n", argv[1]);
	return 0;
} 
