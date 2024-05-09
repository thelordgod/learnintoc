#include<stdio.h>

#define MAXLINE 1000
#define MAXLINES 1000
#define PRINTLENGTH 80

// remove trailing blanks and tabs from each line of input, delete entirely blank lines
int main() {
	int c, i, j;
	int ll[MAXLINE]; // line lengths
	int qlin; // qualifying line quantity
	char buf[MAXLINE]; // current line buffer
	char printbuf[MAXLINES][MAXLINE]; // total line buffer

	len = qlin = 0;
	while ((c = getchar()) != EOF) {
		if (c != '\n') {
			buf[len] = c;
			++len;
		}
		else if (c == '\n') {
			len = 0;
		}
		else {
		}
	}
	for (i = 0; i < qlin; ++i) {
		for (j = 0; j < ll[i]; ++j)
			printf("%c", printbuf[i][j]);
		putchar('\n');
	}
		
	return 0;
}
