#include <stdio.h>

int main()
{
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");

    scanf("%f",&weight);
    value = 1700 * weight * 14.5833;
    printf("Your weight in platinum is worth %.2f.\n",value);
    printf("You are easily worth that!If platinum price drop,\n");
    printf("eat more to maintain your worth.");
    return 0;
}
