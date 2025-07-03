#include<stdio.h>
int main(){
    int x;
    printf("Enter the no. x - > ");
    scanf("%d",&x);
    int sum=0;
    // for(int i=0;i<=x;i++){
    //     if(x==0 && x!=1) break;
    //     printf("x = %d , ",x);
    //     int a=x%10;
    //     printf("a = %d \n",a);
    //     sum=sum+a;
    //     x=x/10;
    // }
    do{
        int a=x%10;
        sum=sum+a;
        x=x/10;
    }while(x>0);
    printf("Ans is %d",sum);
}
// while(x>0){
//     int a=x%10;
//     sum=sum+a;
//     x=x/10;
// }