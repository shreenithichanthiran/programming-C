#include<stdio.h>
void max(int arr[], int size){
    int *p = arr;
    int m=0;
    for(int i=0; i<size; i++){
        if (m < *(p+i)){
            m=(*(p+i));
        }
    }
    printf("%d",m);
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    max(arr,size);
    return 0;
}