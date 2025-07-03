#include<stdio.h>
int main(){
    int s = 0;
    int y = 0;
    for(int i=1;i<=100;i++){
        if(i%2==0){
            s = s + i;
        }else {
            y = y + i;
        }
    }
    printf("sum of all even numbers are %d\n",s);
    printf("sum of all odd numbers are %d",y);
}