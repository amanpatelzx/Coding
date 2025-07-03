#include<stdio.h>
int main(){
    int a;
    printf("Enter the no.s -: ");
    scanf("%d",&a);
   while(a!=0){
    printf("%d , ",a);
    a=a-2;
   }
    return 0;
}