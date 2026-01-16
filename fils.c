#include <stdio.h>

int main(void){
	FILE *fp;

	fp = fopen("hello.txt", "r");

	int c;
	while((c = fgetc(fp)) != EOF) {
		printf("%c", c);
	}

	fclose(fp);

	char s[1024];
	int linecount = 0;

	fp = fopen("quote.txt", "r");

	while(fgets(s, sizeof s, fp) != NULL) {
		printf("%d: %s", ++linecount, s);
	}
	fclose(fp);

	char name[1024];
	float len;
	int mass;
	fp = fopen("whales.txt", "r");

	while(fscanf(fp, "%s %f %d", name, &len, &mass) != EOF)
		printf("%s whale, %d tonnes, %.1f meters\n", name, mass, len);

	fclose(fp);

	int x = 32;
	fp = fopen("output.txt", "w");
	fputc('B', fp);
	fputc('\n', fp);
	fprintf(fp, "x = %d\n", x);
	fputs("Hello world\n", fp);

	fclose(fp);

	unsigned char bytes[] = {5, 37, 0, 88, 255, 12};
	printf("wirting binary\n");
	fp = fopen("output.bin", "wb");
	fwrite(bytes, sizeof(char), 6, fp);
	fclose(fp);

	unsigned char c1;
	fp = fopen("output.bin", "rb");
	printf("reading back binary\n");
	while(fread(&c1, sizeof(char), 1, fp) > 0)
		printf("%d\n", c1);
	fclose(fp);
}

