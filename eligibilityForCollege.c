#include <stdio.h>
int main()
{
    int m, p, c, t;
    printf("Enter your maths marks - ");
    scanf("%d", &m);
    printf("Enter your physics marks - ");
    scanf("%d", &p);
    printf("Enter your chemistry marks - ");
    scanf("%d", &c);
    t = m + p + c;
    if ((m >= 65 && p >= 55 && c >= 50) || (t >= 190) || (m + p >= 140))
    {
        printf("You are eligible for the admission\n");
    }
    else
    {
        printf("You are not eligible for the admission\n");
    }
    return 0;
}