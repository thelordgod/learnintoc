#include<stdio.h>

#define MAXLINE 1000
#define MAXLINES 1000
#define PRINTLENGTH 80

// print all lines longer than 80 characters
int main() {
	int c, i, j;
	int len; // current line length
	int qlin; // lines that qualify
	int ll[MAXLINE]; // qualifying line lengths
	char buf[MAXLINE]; // current line buffer
	char printbuf[MAXLINES][MAXLINE]; // qualifying line buffer

	max = len = qlin = 0;
	while ((c = getchar()) != EOF) {
		if (c != '\n') {
			buf[len] = c;
			++len;
		}
		else if (c == '\n' && len <= PRINTLENGTH)
			len = 0;
		else if (len > PRINTLENGTH) {
			for (i = 0; i < len; ++i)
				printbuf[qlin][i] = buf[i];
			ll[qlin] = len;
			++qlin;
			len = 0;
		}
	}
	for (i = 0; i < qlin; ++i) {
		for (j = 0; j < ll[i]; ++j)
			printf("%c", printbuf[i][j]);
		putchar('\n');
	}
		
	return 0;
}
