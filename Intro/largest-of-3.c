#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    int largest=(a > b && a > c) ? a : (b > c ? b : c);
    printf("%d is the largest among the three",largest);
}