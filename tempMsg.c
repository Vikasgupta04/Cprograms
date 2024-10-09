#include <stdio.h>
int main()
{
    int temp;
    printf("Enter the weather in degree celcius in your area - ");
    scanf("%d", &temp);
    if (temp <= 0)
        printf("Freezing weather!!");
    else if (temp <= 10)
        printf("Very cold weather!!");
    else if (temp <= 20)
        printf("Cold weather!!");
    else if (temp <= 30)
        printf("Normal weather!!");
    else if (temp <= 40)
        printf("Hot weather!!");
    else
        printf("Very Hot weather!!");
    return 0;
}