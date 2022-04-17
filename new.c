#include<stdio.h>
#include<stdlib.h>
void GoodArray(int*,int);
int main(){
    /*
    printf("Enter the no of values you need");
    scanf("%d",&n);
    printf("Enter the data\n"); */
    int arr[]={3,1,2,3,4,6,5};
    GoodArray(&arr[0],7);
    return 0;
}
void GoodArray(int *ptr,int n){
    int p=0;
    int count=0;
    int i,j;
    i=0;
    while(*(ptr+i)!=1){
            count++;
            *(ptr+i)=0;
            i++;
    }
    for(j=i;j<n-1;j++){
        if(*(ptr+j)>*(ptr+j+1))
            count++;
        if(*(ptr+j+1)-*(ptr+j)!=1)
            count++;
    }
    printf("The value=%d",count);
}


