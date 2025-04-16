//  Write a C program that takes an integer input from the user and prints its multiplication table using a for loop. 

#include<stdio.h>

int main(){
    int i;
    printf("Enter a Number:");
    scanf("%d",&i);

    int j;
    int b;
    for(j=1;j<=10;j++){
        b=i*j;
        printf("%d x %d = %d \n",i,j,b);
    }

    return 0;
}