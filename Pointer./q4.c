#include<stdio.h>
void find(int arr[], int size, int *b){
    int *p=arr;
    for(int i=0; i<size; i++){
        if(*(b)==(*(p+i))){
            printf("%d",i+1);
        }
        else{
            printf("%d",-1);
            break;
        }
    }
}

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int b=0;
    scanf("%d",&b);
    find(arr,size,&b);
    return 0;
}