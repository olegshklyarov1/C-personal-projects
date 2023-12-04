#include <stdio.h>

int main()
{

    const double PI = 3.14159;
    double radius;
    double circumference;

    printf("\nEnter your radius: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("Circumference : %lf", circumference);

    return 0;
}