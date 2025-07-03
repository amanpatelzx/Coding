#include <stdio.h>
int main()
{
    int n;
    printf("enter your saving amount : ");
    scanf("%f", &n);
    printf("we have, chips = rs 30/-\n soda = rs 40/-\n chocolate = rs 50/-\n");
    int p;
    printf("enter 1 is for chips\n , 2 is for soda\n , 3 is for chocolate\n which you want to buy : ");
    scanf("%d", &p);
    switch (p)
    {
    case 1:
        printf("you have left rs %d\n", n-30);
        break;
    case 2:
        printf("you have left rs %d\n", n-40);
        break;
    case 3:
        printf("you have left rs %d\n", n-50);
        break;

    default:
        printf("you have entered wrong number");
        break;
    }

    return 0;
}