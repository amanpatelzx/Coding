#include<stdio.h>
float main(){
    float r,area,s;
    printf("Enter the no.s -: ");
    scanf("%f",&r);
    area=r*r*3.14;
    s=2*3.14*r;
    printf("Area=%f\n",area);

    printf("Curcumference=%f",s);
    return 0;
}