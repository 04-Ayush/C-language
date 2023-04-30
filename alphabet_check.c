// This program is to check whether the entered details is an alphabet or not
#include<stdio.h>

int main(){
    char n;
    printf("Enter the character:\n");
    scanf("%c",&n);
    if((n>='a'&& n<='z')||(n>='A'&& n<='Z')){
        printf("%c is an alphabet.",n);
    }
    else{
        printf("%c is not an alphabet.",n);
    }
    
    return 0;
}