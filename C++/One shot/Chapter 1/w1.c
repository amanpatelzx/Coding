#include<stdio.h>
int main(){
    int a;
    printf("Enter 1 -> for Factorial\nEnter 2 -> Check Prime\nEnter 3 -> for Pattern \n");
    scanf("%d",&a);
    if(a==1){
        int n;
        printf("Enter number : "); 
        scanf("%d",&n);
        int f=1;
        for(int i=1;i<=n;i++){
            f=f*i;
            }
            printf("The Fatorial of no. %d is %d",n,f);
    }
    else if(a==2){
        int n;
        printf("Enter number : "); 
        scanf("%d",&n);
        int c;
        for(int i=2;i<=n/2;i++){
        if(n%i==0){
            c=1;
            break;

        }
        
    }
    if(c==1){
        printf("Its not Prime");
        }
        else printf("It's Prime");


    }
    else if(a==3){
        int n;
        printf("Enter number : "); 
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
            printf(" * ");
            }
            printf("\n");
    }
    }
   
} 