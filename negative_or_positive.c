// It is a program to check whether a number is negative or positive
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number you want to check for:\n");
    scanf("%d",&n);
    if(n>0){
        printf("%d is a positive number.",n);

    }
    else if(n<0){
        printf("%d is a negative number.",n);

    }
    else{
        printf("%d is neither negative nor positive.",n);
    }
    return 0;
}