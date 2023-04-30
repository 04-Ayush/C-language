// To calculate the sum of n natural numbers.
#include<stdio.h>

int main(){
    float n,a=1,d=1,s=0;
    printf("Enter the number till which you want to calculate the sum:\n");
    scanf("%f",&n);
    s=(n/2)*((2*a)+(n-1)*d);
    printf("The sum upto %1.0f term is %1.0f.",n,s);

    return 0;
}