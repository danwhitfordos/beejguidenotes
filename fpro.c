#include<stdio.h>

int foo(void);

int main() {
	int i;

	i = foo();

	printf("i is %d and its address is %p\n", i, &i);
}

int foo() {
	return 3490;
}

