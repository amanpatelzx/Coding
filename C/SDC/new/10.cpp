#include<stdio.h>
int main(){
    int x;
    printf("Enter the size of array -> ");
    sacnf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
}