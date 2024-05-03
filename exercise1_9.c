#include<stdio.h>

// program to copy its input to its output, replacing each string of one or more blanks with a single blank
int main() {
	double b;
	int c;

	b = 0;
	while((c = getchar()) != EOF) {
		if (c == ' ')
			++b;
		if (b > 1 && c == ' ')
			;
		else if (b > 0 && c != ' '){
			b = 0;
			putchar(c);
		}
		else
			putchar(c);
	}
}
