#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        printf("\nWelcome to the program to calculate area and perimeter of following geometrical shapes:");
        printf("\nMENU\n1.Rectangle\n2.Triangle\n3.Circle\n4.Exit\n");
        printf("Enter your choice - ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            float length, breadth;
            printf("Enter the length and breadth of the rectangle separated with a space - ");
            scanf("%f %f", &length, &breadth);
            printf("The area and perimeter of the rectangle is %f %f respectively", (length * breadth), 2 * (length + breadth));
            break;
        case 2:
            float a, base, c, height;
            printf("Enter the three sides of the triangle and height of the triangle separated with a space - ");
            scanf("%f %f %f %f", &a, &base, &c, &height);
            printf("The area and perimeter of the triangle is %f %f respectively", (a + base + c), (0.5 * (base * height)));
            break;
        case 3:
            float r;
            float pi = 3.14;
            printf("Enter the radius of the circle - ");
            scanf("%f", &r);
            printf("The area and perimeter of the circle is %f %f respectively", (pi * r * r), (2 * pi * r));
            break;
        case 4:
            printf("Exiting the program....");
            exit(0);
            break;
        default:
            printf("INVALID CHOICE, PLEASE TRY AGAIN");
            break;
        }
    }
    return 0;
}