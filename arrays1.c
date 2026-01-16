#include<stdio.h>

void print_bigness(int *a) {
	printf("in the function a is %zu bigness\n", sizeof a);
}

int main(void) {
	int a[4];

	a[0] = 1;
	a[1] = 2;
	a[2] = 4;
	a[3] = 8;

	printf("array is %zu big\n", sizeof a);
	print_bigness(a);

	int *p;
	p = a;
	printf("p is %p and a is %p\n", p, &a);
}
