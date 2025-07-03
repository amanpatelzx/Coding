#include<stdio.h>
int main(){
    int x;
    printf("Enter the size of array -> ");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    int esum=0,osum=0;
    for(int i=0;i<x;i++){
        if((i+1)%2==0) esum=esum+arr[i];
        else osum=osum+arr[i];
    }
    printf("Odd sum is %d and Even sum is %d",osum,esum);
}