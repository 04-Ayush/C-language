// This program is to check the greatest number from three numbers
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Enter the third number:\n");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("%d is greater amongst the three.\n",a);
    }
    else if(b>c&&b>a){
        printf("%d is greater amongst the three.\n",b);
    }
    else{
        printf("%d is greater amongst the three.\n",c);
    }
    
    return 0;
}
