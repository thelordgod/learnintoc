#include<stdio.h>

/*
int main() {
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}
 */

int main() {
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		; // as C requires for loops to have a statement body, this semicolon is required, and is called a null statement
	printf("%.0f\n", nc);
}
