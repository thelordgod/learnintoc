#include<stdio.h>

#define MAXLINE 1000
#define MAXLINES 1000
#define PRINTLENGTH 80
#define TRUE 1
#define FALSE 0

// remove trailing blanks and tabs from each line of input, delete entirely blank lines
int main() {
	int c, i, j, len;
	int ll[MAXLINE]; // line lengths
	int qlin; // qualifying line quantity
	char buf[MAXLINE]; // current line buffer
	char printbuf[MAXLINES][MAXLINE]; // total line buffer
	int lwh = FALSE; // last word hit

	len = qlin = 0;
	while ((c = getchar()) != EOF) {
		if (c != '\n') {
			buf[len] = c;
			++len;
		}
		else {
			if (len > 0) {
				for (i = len - 1; i >= 0; --i) {
					if (lwh == TRUE) {
						for (j = 0; j < len; ++j) {
							printbuf[qlin][j] = buf[j];
						}
						ll[qlin] = len;
						lwh = FALSE;
					}
					else if (buf[i] == ' ' || buf[i] == '.')
						--len;
					else
						lwh = TRUE;
				}
				len = 0;
				++qlin;
				lwh = FALSE;
			}
		}
	}

	for (i = 0; i < qlin; ++i) {
		for (j = 0; j < ll[i]; ++j)
			printf("%c", printbuf[i][j]);
		putchar('\n');
	}
	return 0;
}
