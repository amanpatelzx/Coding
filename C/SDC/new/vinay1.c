#include<stdio.h>
int main(){
    int arr[3][3]={{2,1,5},{3,2,6},{5,1,3}};
    int sum=0;
    for(int i=0;i<3;i++){
        sum=sum+arr[i][i]+arr[2-i][i];
    }
    if(3%2!=0) sum=sum-arr[(3-1)/2][(3-1)/2];
    printf("Diagonal sum is %d ",sum);
}
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ",ans[i][j]);                                                                      
    //     }
    //     printf("\n");
    // }
    
// int x,y;
// printf("Enter rows and column of matrix ->");
// scanf("%d %d",&x,&y);
// int arr[x][y];
// int brr[x][y];
// int ans[x][y];

// printf("Enter the valueo of arr-> \n");

// for(int i=0;i<x;i++){
//     for(int j=0;j<y;j++){
//         scanf("%d",&arr[i][j]);                                                                        
//     }
// }
// printf("Enter the valueo of brr-> \n");

// for(int i=0;i<x;i++){
//     for(int j=0;j<y;j++){
//         scanf("%d",&brr[i][j]);                                                                        
//     }
// }