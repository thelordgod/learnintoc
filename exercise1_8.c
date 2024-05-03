#include<stdio.h>

// count blanks, tabs and newlines
int main() {
	double b, t, nl;
	int c;
	
	b = 0;
	t = 0;
	nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		if (c == ' ')
			++b;
		if (c == '\t')
			++t;
	}
	printf("blanks: %.0f; tabs: %.0f; newlines: %.0f", b, t, nl);
}
