#include<stdio.h>//a^b calculate
void swap1(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b; 
    printf("Enter two no. : ");
    scanf("%d %d",&a,&b);
    printf("You have given, a is -> %d and b is -> %d\n",a,b);
    swap1(&a,&b);
    printf("Now a is -> %d and b is -> %d",a,b);
}
