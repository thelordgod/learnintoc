#include<stdio.h>

#define MAXLINE 1000

//function that reverses the character string s, one line at a time
int main() {
	int c, i, len;
	char buf[MAXLINE];

	len = 0;

	while ((c = getchar()) != EOF) {
		if (c != '\n') {
			buf[len] = c;
			++len;
		}
		else {
			for (i = len - 1; i >= 0; --i) {
				putchar(buf[i]);
			}
			putchar('\n');
			len = 0;
		}
	}
}
