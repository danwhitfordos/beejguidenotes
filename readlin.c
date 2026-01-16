#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	while(1) {
		int top=0;
		int size = 1;
		char *buf;
		int c;

		buf = calloc(size, sizeof(char));

		while(c = getc(stdin), c != '\n' && c != EOF) {
			if (top == size-1) {
				size *= 2;
				char *newbuf = realloc(buf, size);
				if (newbuf == NULL) {
					free(buf);
					return -1;
				}
				buf = newbuf;
			}
			buf[top++] = c;
		}

		if (c == EOF && top == 0) {
			free(buf);
			return -1;
		}

		char *newbuf = realloc(buf, top+1);
		if (newbuf != NULL) buf = newbuf;

		buf[top] = '\0';

		int len = strlen(buf);
		printf("got line [%2d] %s\n", len, buf);
		
		free(buf);
	}
}
