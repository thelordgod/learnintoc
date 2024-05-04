#include<stdio.h>

#define MAXWORDLENGTH 32

// print a histogram of the lengths of words in its input (horizontal variant)
int main() {
	int c, i, j, nc, ws;

	int dhist[MAXWORDLENGTH];
	for (i = 0; i < MAXWORDLENGTH; ++i) {
		dhist[i] = 0;
	}

	ws = nc = 0;
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

	for (i = 1; i < MAXWORDLENGTH; ++i) { // no point starting from 0 (there are better ways to avoid this buttfuck it
		printf("word length: %d [", i);
		for (j = 0; j < dhist[i]; ++j) {
			putchar('=');
		}
		printf("]\n");
	}
}
