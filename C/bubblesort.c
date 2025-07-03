#include<stdio.h>
int main(){
    int x;
    printf("Enter the size of array -> ");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++){
        for(int j=1;j<x-i;j++){
            if(arr[j-1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
}