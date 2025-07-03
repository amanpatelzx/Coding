#include <stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    int b,x;
    b = (int)a;
    for(int i=65;i<=122;i++){
        
    if (a == 65 || a == 69 || a == 73 || a == 79 || a == 85 || a == 97 || a == 101 || a == 105 || a == 111 || a == 117)
    {
       x=1;
    }
    // else if(a>=91 && a<=96 || a>=1 && a<=64 || a>=123 && a<=256){
    //    x==2;
    // }
        
}
 if(x==1) printf("THe Character %c is Vowel", a);
//  else if(x==2) printf("You have enter the Wrong character");
 else  printf("The character %c is Consonent",a);
}
