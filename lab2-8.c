//lab2 #8 pg 35

#include <stdio.h>

int pow(int base, int exponent);

int main(){

	int payments = 3;
	float loan, interest, monthly;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	interest /= 100.0f * 12.0f;
	printf("Enter monthly payment: ");
	scanf("%f",&monthly);

	float remaining[payments];

	for(int p=0; p<payments; p++){
		remaining[p] = loan - monthly;
		remaining[p] += remaining[p] * interest;
		loan = remaining[p];
	}

	printf("Balance remaining after  first payment: $%.2f\n", remaining[0]);
	printf("Balance remaining after second payment: $%.2f\n", remaining[1]);
	printf("Balance remaining after  third payment: $%.2f\n", remaining[2]);

	return 0;
}
