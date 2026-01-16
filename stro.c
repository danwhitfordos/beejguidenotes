#include<stdio.h>

void foo(char *s, char *buf) {
	int i=1;
	char c;
	buf[0] = 'F';
	s++;
	while((c = (s++)[0]) != 0) {
		buf[i] = c;
		i++;
	}
	buf[i] = 0;
}

int main(void) {
	char *s = "somestuff";
	printf("chruning\n");
	char buf[20] = {1, 1, 0};
	foo(s, buf);
	printf("%s\n", buf);
	for(int i=0; i<20; ++i) {
		printf("%d %d\n", i, buf[i]);
	}
}

