#include<stdio.h>
int main(){
    int x;
    printf("Enter rows = column of matrix ->");
    scanf("%d",&x);
    int arr[x][x];
    printf("Enter the valueo of arr-> \n");

for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        scanf("%d",&arr[i][j]);                                                                        
    }
}
    int sum=0;
    for(int i=0;i<x;i++){
        sum=sum+arr[i][i]+arr[x-1-i][i];
    }
    if(x%2!=0) sum=sum-arr[(x-1)/2][(x-1)/2];
    printf("Diagonal sum is %d ",sum);
}