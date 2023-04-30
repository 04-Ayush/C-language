#include<stdio.h>

int main(){
    int n;
    printf("Enter the year you want to check for leap year:\n");
    scanf("%d",&n);
    if(n%4==0||n%400==0){
        printf("It is a leap year.\n");

    }
    else{
        printf("It is not a leap year.");

    }
    return 0;
} 