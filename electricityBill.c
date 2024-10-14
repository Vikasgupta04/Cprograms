#include <stdio.h>
#include <string.h>
int main()
{
    int customer_id;
    char name[50];
    int units;
    float bill_amt;
    printf("Welcome to the Electricity bill Calculator App!!\n");
    printf("Enter you name - ");
    scanf("%s", name);
    printf("Enter the customer ID - ");
    scanf("%d", &customer_id);
    printf("Enter the units consumed - ");
    scanf("%d", &units);
    if (units <= 199)
    {
        bill_amt = units * 1.20;
    }
    else if (units >= 200 && units <= 400)
    {
        bill_amt = units * 1.80;
    }
    else if (units > 400 && units < 600)
    {
        bill_amt = units * 2.00;
    }
    else if (units >= 600)
    {
        bill_amt = units * 2.20;
    }
    else
    {
        printf("Enter valid units");
    }
    printf("NAME - %s\n", name);
    printf("CUSTOMER ID - %d\n", customer_id);
    printf("UNITS CONSUMED - %d\n", units);
    printf("THE BILL AMOUNT IS - %.2f\n", bill_amt);
}