#include<stdio.h>
int main(){
    int x;
    printf("enter x : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        for(int l=1;l<=i-1;l++){
            printf("* ");
        }
        printf("\n");
    }
}