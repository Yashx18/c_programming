#include <stdio.h>
int main()
{
    int cash1, cash2, total;
    printf("Enter the amount you have :");
    scanf("%d", &cash1);
    printf("Enter the amount you have :");
    scanf("%d", &cash2);

    total = cash1 + cash2;
    printf("Total cash available is %d", total);

    return 0;
}