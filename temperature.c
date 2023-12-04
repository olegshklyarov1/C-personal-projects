#include <stdio.h>
#include <ctype.h>

int main()
{

    char unit;
    float temp;
    printf("\nis the temperature in (F) or (C) ?");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("enter the temperature in C: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("the temperature in Farenheit is: %.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("enter the temperature in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("the temperature in Celcius is : %.1f", temp);
    }
    else
    {
        printf("Thats illegal");
    }

    return 0;
}