//Lab 2 pg 34 #5

#include <stdio.h>

int pow(int base, int exponent);

int main(){

	int x_val;

	printf("Please enter a value for x to evalue the following polynomial:\n");
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("Value of 'x': ");
	scanf("%i", &x_val);

	int value = 3*pow(x_val,5) + 2*pow(x_val,4) - 5*pow(x_val,3) - pow(x_val,2) + 7*x_val -6;
	printf("The value of the polynomial is: %i\n", value);

	return 0;
}

int pow(int base, int exponent){
	
	if (exponent == 0)
		return 0;

	int value = base;
	for(int i=1; i<exponent; i++)
		value *= base;

	return value;
}
