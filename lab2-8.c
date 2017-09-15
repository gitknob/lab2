//lab2 #8 pg 35

#include <stdio.h>


float * calcLoanPayments(
	float loan, float interest, float monthly, int payments
);

int main(){

	//Display with TWO decimal points!
	int payments = 3;
	float loan, interest, monthly;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f",&monthly);
	
	float *afterPayment = calcLoanPayments(loan, interest, monthly, payments);
	
	printf("Balance remaining after first payment: %f",  *(afterPayment + 0));
	printf("Balance remaining after second payment: %f", *(afterPayment + 1));
	printf("Balance remaining after third payment: %f",  *(afterPayment + 2));

	return 0;
}

float * calcLoanPayments(
	float loan, float interest, float monthly, int payments
){

	float afterPayment[payments];

	for(int p=0; p<payments; p++){
		afterPayment[p] = p;
	}

	return afterPayment;
}

