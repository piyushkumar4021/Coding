#include<stdio.h>
#include"limits.h"
// This File is Under Construction

int main(){
    
    int size;
    printf("Enter Size : ");
    scanf("%d",&size);

    int i,j,num[size];

    for(i=0; i<size; i++)
    scanf("%d",&num[i]);

    int maxSum=INT_MIN,index[size],sum;

    for(i=0; i<size; i++){
        sum=0;

        for(j=i; j<size; j++){
            sum+=num[j];

            if(sum>maxSum)
            maxSum=sum;
        }
    }

    printf("Max Sum of Subarray : %d",maxSum);

    return 0;
}