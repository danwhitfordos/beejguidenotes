#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *dancpy(void *dst, void *src, int bytes) {
	char *s = src, *d = dst;

	while (bytes--) {
		*d++ = *s++;
	}

	return dst;
}

struct animal {
    char *name;
    int leg_count;
};

int compar(const void *elem1, const void *elem2) {
	const struct animal *a1 = elem1;
	const struct animal *a2 = elem2;

	return a1->leg_count - a2->leg_count;
}

int main(void){
	int a[] = {11, 22, 33, 44, 55, 999};

	int *p = a;

	printf("%d\n", *p);
	printf("%d\n", *(p+1));

	while(*p != 999) printf("%d\n", *(p++));

	char *s = "my name is dan";
	char *s1 = s;
	while (*s1 != 0) s1++;
	printf("len of '%s' is %ld\n", s, s1-s);

	char sarr[] = "Goats!";
	char t[100];
	memcpy(t, sarr, 7);
	printf("%s\n", t);

	char t2[100];
	dancpy(t2, sarr, 7);
	printf("t2 %s\n", t2);

	struct animal animals[4] = {
	        {.name="Dog", .leg_count=4},
        	{.name="Monkey", .leg_count=2},
	        {.name="Antelope", .leg_count=4},
        	{.name="Snake", .leg_count=0}
	};

	qsort(animals, 4, sizeof(struct animal), compar);
	for (int i = 0; i < 4; i++) {
		printf("%d: %s\n", animals[i].leg_count, animals[i].name);
	}

	printf("Done\n");
}

