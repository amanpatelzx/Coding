#include<stdio.h>
int main(){
    int x=5;
    while(x>6){
        printf("%d ",x);
        x--;
    }
    x=5;
    printf("\n");
    do{
       printf("%d ",x);
        x--; 
    }while(x>6);
}