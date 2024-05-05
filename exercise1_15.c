#include<stdio.h>

// rewrite fahrenheit-celsius program from 1.2 to use a function for conversion

float ftoc (float fahr);

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("F to C\n");
	while (fahr <= upper) {
		printf("%3.0f\t%6.1f\n", fahr, ftoc(fahr));
		fahr = fahr + step;
	}
}

//C=(5/9)(F-32)
float ftoc (float fahr) {
	float celsius;
	celsius = (5.0 / 9.0) * (fahr - 32.0);
	return celsius;
}
