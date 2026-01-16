#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {
	char *key = *++argv;
	char *me = getenv(key);

	if (me == NULL) {
		printf("can't find %s\n", key);
		return EXIT_FAILURE;
	}

	printf("%s: %s\n", key, me);
}

