#include<stdio.h>
int main(){
int m,n,o;
printf("Enter rows and column of matrix as m*n ->");
scanf("%d %d",&m,&n);
int arr[m][n];
printf("Enter the valueo of arr-> \n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);                                                                        
    }
}
printf("Enter rows and column of matrix as n*o ->");
scanf("%d %d",&n,&o);
int brr[n][o];
printf("Enter the valueo of brr-> \n");
for(int i=0;i<n;i++){
    for(int j=0;j<o;j++){
        scanf("%d",&brr[i][j]);                                                                        
    }
}
printf("\n");
printf("\n");
int ans[m][o];

for(int i=0;i<m;i++){
    for(int j=0;j<o;j++){
        int sum=0;
        for(int k=0;k<n;k++){
            sum=sum+arr[i][k]*brr[k][j];
        }
        ans[i][j]=sum;                                                                        
    }
    }

    for(int i=0;i<m;i++){
    for(int j=0;j<o;j++){
        printf("%d ",ans[i][j]);                                                                        
    }
    printf("\n");
}

}