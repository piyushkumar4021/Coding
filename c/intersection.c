#include <stdio.h>

int doIntersection(int sizeA, int sizeB, int a[], int b[], int result[]){
    int i,j,flag,index=0;

    for(i=0; i<sizeA; i++){
        flag=0;

        for(j=0; j<sizeB; j++){
            
            if(a[i]==b[j]){
            flag=1;
            break;
            }
        }
        if(flag==1){
        result[index]=a[i];
        index++;
        }

    }

    return index;
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

    int result[sizeA],elements;
    elements=doIntersection(sizeA,sizeB,a,b,result);

    sortArray(result,elements);

    for(i=0; i<elements; i++)
    printf("%d\t",result[i]);

    printf("\n");
    return 0;
}