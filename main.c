#include <stdio.h>

int main()
{
    float num;

    printf("Enter integer or character or signed integer or flaoting number\n");
    scanf("%f",&num);

    float input = num - (int)num;
    if(input > 0 || input < 0)
    {
        printf("Entered floating point number\n");
    }
    else
    {
    if(num >= 0)
    {
        printf(" Entered integer\n");
    }
    else if((char)num < 0)
    {
        printf("Entered signed integer\n");
    }
    else if((num >= 'A' ||num <= 'Z') || (num >= 'a' || num <= 'z'))
    {
        printf("Entered character\n");
    }
    else
    {
        printf("Enter valid num\n");
    }
    }

    return 0;
}
