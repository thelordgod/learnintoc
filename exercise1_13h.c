#include<stdio.h>

// print a histogram of the lengths of words in its input (horizontal variant)
int main() {
	int c, ws;

	ws = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			++ws;
			if (ws < 2)
				putchar('\n');
		}
		else {
			putchar('=');
			ws = 0;
		}
	}
}
