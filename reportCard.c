#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], division[100];
    int rollNo;
    float maths, science, english, total, percentage;
    printf("Enter your name - ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Enter you Roll No - ");
    scanf("%d", &rollNo);
    printf("Enter maths marks - ");
    scanf("%f", &maths);
    printf("Enter science marks - ");
    scanf("%f", &science);
    printf("Enter english marks - ");
    scanf("%f", &english);
    total = maths + science + english;
    percentage = (total / 300) * 100;
    if (percentage >= 60)
    {
        strcpy(division, "FIRST");
    }
    else if (percentage < 60 && percentage > 40)
    {
        strcpy(division, "SECOND");
    }
    else
    {
        strcpy(division, "THIRD");
    }

    printf("NAME - %s\n", name);
    printf("ROLL NO - %d\n", rollNo);
    printf("MATHS MARKS - %.1f\n", maths);
    printf("SCIENCE MARKS - %.1f\n", science);
    printf("ENGLISH MARKS - %.1f\n", english);
    printf("TOTAL MARKS - %.2f\n", total);
    printf("PERCENTAGE - %.2f\n", percentage);
    printf("DIVISION - %s", division);

    return 0;
}