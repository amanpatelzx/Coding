#include<stdio.h>
int main(){
    int a;

    int sum=0;
    scanf("%d",&a);
    int b=a;
   while(a!=0){
    int l=a%10;
    sum=sum+(l*l*l);
    a=a/10;
   }
   if(sum==b) printf("Number is Armstrong");
   else printf("Number is not Armstrong");
   
}