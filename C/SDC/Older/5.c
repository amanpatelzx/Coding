#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int c=1;
    
    for(int i=a+b;i>=1;i--){
        if(a%i==0 && b%i==0){
        c=i;
         break;
        }
    }
    
    a=a/c;
    b=b/c;
    int d=a*b*c;
    printf("The LCM is %d",d);
    }

   
