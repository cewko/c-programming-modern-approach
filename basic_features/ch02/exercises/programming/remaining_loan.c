#include <stdio.h>

int main(void) {
    double loan, annual_interest_rate, monthly_payment;
    double monthly_interest_rate;
    double balance;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan);

    printf("Enter interest rate: ");
    scanf("%lf", &annual_interest_rate);

    printf("Enter monthly payment: ");
    scanf("%lf", &monthly_payment);

    monthly_interest_rate = annual_interest_rate / 100.0f / 12.0f;
    balance = loan;

    for (int i = 1; i <= 3; i++) {
        balance = balance - monthly_payment + balance * monthly_interest_rate;
        printf("Balance remaining after first payment %d: $%.2f\n", i, balance);
    }

    return 0;
}