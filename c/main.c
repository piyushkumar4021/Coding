#include<stdio.h>
#include"limits.h"
// This File is Under Construction

int doUnion(int sizeA, int sizeB, int a[], int b[], int result[]){
    int i,j,t,count=0;

    for(i=0; i<sizeA; i++){
        result[i]=a[i];
    }
    count=sizeA;

    for(i=0; i<sizeB; i++){
        t=1;

        for(j=0; j<sizeA; j++){
            if(b[i]==a[j]){
                t=0;
                break;
            }
        }

        if(t==1){
            result[count]=b[i];
            count++;
        }
    }

    return count;
}

void sortArray(int a[], int elements){
    int i,j,temp;

    for(i=0; i<elements; i++){
        for(j=i+1; j<elements; j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){
    
    int sizeA,sizeB;
    scanf("%d %d",&sizeA,&sizeB);

    int a[sizeA],b[sizeB],i;

    for(i=0; i<sizeA; i++)
    scanf("%d",&a[i]);

    for(i=0; i<sizeB; i++)
    scanf("%d",&b[i]);

    int result[sizeA+sizeB],elements;
    elements=doUnion(sizeA,  sizeB,  a,  b, result);

    sortArray(result, elements);

    for(i=0; i<elements; i++){
        printf("%d\t",result[i]);
    }

    return 0;
}