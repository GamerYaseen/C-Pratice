#include<stdio.h>

int main(){
    int a;

    printf("Enter the value of a- ");
    scanf("%d", &a);

    if(a%2==0){

        printf("The given number %d is even", a);
    }
    else{
        printf("The given number %d is odd", a);
    }
    return 0;

}