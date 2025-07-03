#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the no.s -: ");
    scanf("%d",&a);
    b=a;
   for(int i=0;i<=a/2;i++){
    printf("%d ,",b);
    b=b-2;
   }
    return 0;
}