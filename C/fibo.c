#include<stdio.h>//a^b calculate
    int n; 
int fibo(int n){
    if(n==1 || n==2){
    return 1;
    }
    return (fibo(n-1)+fibo(n-2));
}
int main(){
    printf("Enter n no. of fibonaci series : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("%d ",fibo(i));
    }
}
