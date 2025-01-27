#include <stdio.h>

int swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The value of n after swapping is: %d", a);
    printf("\n");
    printf("The value of m after swapping is: %d", b);
}

int main(){
    int n, m;
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    swap(n, m);

}