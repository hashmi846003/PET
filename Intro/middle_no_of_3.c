#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three number\n");
    scanf("%d %d %d",&a,&b,&c);
    int second_largest= ( (a > b && a < c) || (a > c && a < b) ) ? a :
        ( (b > a && b < c) || (b > c && b < a) ) ? b : c;

    printf("The second largest number is %d\n", second_largest);
    return 0;
}