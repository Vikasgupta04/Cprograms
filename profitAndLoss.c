#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter the cost price and selling price separated with a space - ");
    scanf("%d %d", &cp, &sp);
    if (sp > cp)
    {
        printf("The profit is - %d", sp - cp);
    }
    else
    {
        printf("The loss is - %d", cp - sp);
    }
    return 0;
}