#include<stdio.h>
int main(){
    int starting_day,N;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    if(N<1||N>365)
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
        return 0;
    }
    printf("Enter the starting day\n");
    scanf("%d",&starting_day);
    if(starting_day<1||starting_day>7)
    {
        printf("Error: Invalid Input, first day should be > 0 and <= 7\n");
        return 0;
    }
    
    int k=((starting_day+N)-1)%7;
    

switch(k){
    case 1:printf("The day is Sunday");
            break;
    case 2:printf("The day is Monday");
            break;       
    case 3:printf("The day is Tuesday");
            break;
    case 4:printf("The day is Wednesday");
            break;
    case 5:printf("The day is Thursday");
            break;
    case 6:printf("The day is Friday");
            break;
    case 0:printf("The day is Saturday");
    break;
}

}