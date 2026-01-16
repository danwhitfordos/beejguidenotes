#include<stdio.h>

void increment(int *p) {
	(*p)++;
}

int main(void) {
	int i;
	int *p;

	p = &i;

	i = 10;
	*p = 20;

	printf("i is %d\n*p (also i) is %d\n", i, *p);
	printf("now incrementing\n");
	increment(p);
	printf("i is now %d\n", i);
	printf("incrementing the addy\n");
	increment(&i);
	printf("i is now %d\n", i);
}

