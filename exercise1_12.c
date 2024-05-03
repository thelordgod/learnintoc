#include<stdio.h>

// program that prints its input one word per line
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
			putchar(c);
			ws = 0;
		}
	}
}
