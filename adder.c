#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {
	if (argc != 3) {
		printf("two numbers bozo\n");
		return EXIT_FAILURE;
	}

	argv++; // who cares program name
	int total=0;
	while(*argv != NULL) {
		int val = atoi(*argv++);
		printf("got %d\n", val);
		total += val;
	}
	printf("total %d\n", total);
}
