#include <stdio.h>

int main(){
    int a;
    printf("Enter Month Number: ");
    scanf("%d", &a);
    if(a%2 == 0 && a < 7){
        printf("The month has 30 days");
    }
    else if (a%2 == 0 && a > 7){
        printf("The month has 31 days");
    }
    else if (a%2 != 0 && a > 7){
        printf("The month has 30 days");
    }
    else{
        printf("The month has 31 days");
    }
}