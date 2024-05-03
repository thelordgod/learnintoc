#include<stdio.h>

//C=(5/9)(F-32)
//F=C/(5/9) + 32
int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("C to F\n");
	while (celsius <= upper) {
		fahr = celsius / (5.0 / 9.0) + 32;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
