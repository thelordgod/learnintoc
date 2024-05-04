#include<stdio.h>

#define MAXWORDLENGTH 32

// print a histogram of the lengths of words in its input (vertical variant)
int main() {
	int c, i, j, h, nc, ws;

	int dhist[MAXWORDLENGTH];
	for (i = 0; i < MAXWORDLENGTH; ++i) {
		dhist[i] = 0;
	}

	ws = nc = h = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			++ws;
			if (ws == 1){
				++dhist[nc];
				nc = 0;
			}
		}
		else {
			++nc;
			ws = 0;
		}
	}

	// get histogram height
	for (i = 0; i < MAXWORDLENGTH; ++i) {
		if (dhist[i] > h)
			h = dhist[i];
	}

	// build histogram
	for (i = h; i >= 0; --i) {
		for (j = 1; j < MAXWORDLENGTH; ++j) {
			if (i == 0)
				printf("%3d", j);
			else if (dhist[j] >= i)
				printf(" = ");
			else
				printf("   ");
		}
		putchar('\n');
	}
}
