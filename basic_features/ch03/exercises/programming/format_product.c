#include <stdio.h>

int main(void) {
    int item_num, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purshase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem\tUnit\t\tPurchase\n");
    printf("\tPrice\t\tDate\n");

    printf("%-d\t$%7.2f\t%2d/%2d/%4d\n", item_num, price, month, day, year);

    return 0;
}