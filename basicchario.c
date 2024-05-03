#include<stdio.h>

int main() {
	int c;
	
	printf("EOF is: %d\n", EOF);
	printf("hello shit: %d\n", getchar() != EOF);
	while ((c = getchar()) != EOF)
		putchar(c);
}
