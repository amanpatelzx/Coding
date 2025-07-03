#include<stdio.h>
int main(){
    int x;
    printf("Enter 1st no. ");
    scanf("%d",&x);
    int y;
    printf("Enter 2nd no. ");
    scanf("%d",&y);
    if(x%2==0 || y%2==0) printf("Even no. ");
    else printf("Odd no. ");
    return 0;
}
