#include <stdio.h>
#include "bar.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("%d + %d is %d\n", 2, 3, add(2, 3));

	int total = 0;
	char *end = NULL;

	for(int i=1; i < argc; i++) {
		long val = strtol(argv[i], &end, 10);
		if (argv[i] == end) {
			printf("%s is not a number dummy\n", argv[i]);
		}
		total = add((int) total, val);
	}

	printf("Total %d\n", total);
}

