#include<stdio.h>

#define MAXWORDLENGTH 32

// print a histogram of the lengths of words in its input (horizontal variant)
int main() {
	int c, i, nc, ws;

	int dhist[MAXWORDLENGTH];
	for (i = 0; i < MAXWORDLENGTH; ++i) {
		dhist[i] = 0;
	}

	ws = nc = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			++ws;
			if (ws < 2){
				++dhist[nc];
				nc = 0;
			}
		}
		else {
			++nc;
			ws = 0;
		}
	}

	for (i = 0; i < MAXWORDLENGTH; ++i)
		printf(" %d", dhist[i]);
}
