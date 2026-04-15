#include<stdio.h>
int main(){
    int arr[]={1,4,7,8,9,5,2};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<len;i++){
        sum=sum+arr[i];
    }
    printf("sum of array is %d",sum);
}