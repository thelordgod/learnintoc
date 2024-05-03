#include<stdio.h>

// program that copies input to output, replacing each tab with \t, each backspace with \b and each backslash with \\
//
int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
}
