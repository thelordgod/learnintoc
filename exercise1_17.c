#include<stdio.h>

#define MAXLINE 1000
#define MAXLINES 1000
#define PRINTLENGTH 80

// print all lines longer than 80 characters
int main() {
	int c, i, j;
	int len;
	int qlin;
	int max;
	int ll[MAXLINE];
	char buf[MAXLINE];
	char printbuf[MAXLINES][MAXLINE];

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
