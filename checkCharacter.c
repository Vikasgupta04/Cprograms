#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character to check whether it is an alphabet, digit, or special character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("The entered character is a number\n");
    }
    else if ((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
    {
        printf("The entered character is a special character\n");
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("The entered character is an alphabet\n");
    }
    else
    {
        printf("The entered character is not a number, special character, or an alphabet, it might be something else (e.g., extended ASCII or control character)\n");
    }

    return 0;
}
