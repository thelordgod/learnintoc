#include<stdio.h>

#define ASCIICHARACTERS 128

// print a histogram of the frequecies of different characters in its input
int main() {
	int c, i, j, nc;

	int dhist[ASCIICHARACTERS];

	for (i = 0; i < ASCIICHARACTERS; ++i) {
		dhist[i] = 0;
	}

	nc = 0;
	while ((c = getchar()) != EOF) {
		++dhist[c];
	}

	for (i = 0; i < ASCIICHARACTERS; ++i) {
		printf("character ");
		putchar(i);
		printf(": [");
		for (j = 0; j < dhist[i]; ++j) {
			putchar('=');
		}
		printf("]\n");
	}
}
