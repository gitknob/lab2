//lab2 #6 pg34

#include <stdio.h>

int main(){

	int x_val;	

	printf("PLease enter a vlue for x to evaulate the following polynomial:\n");
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("Value of 'x': ");
	scanf("%i", &x_val);

	int value = ((((3*x_val+2)*x_val-5)*x_val-1)*x_val+7)*x_val-6;

	printf("The value of the polynomial is: %i\n", value);

	return 0;

}

