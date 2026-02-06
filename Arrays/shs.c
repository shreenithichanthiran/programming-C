#include<stdio.h>
int main(){
    int size;
    int l=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<size; j++){
        if(l<arr[j]){
            l=arr[j];
        }
    }
    int s=0;
    for(int k=0; k<size; k++){
        if(arr[j]>arr[k]){
            s=arr[k];
        }
    }
    printf("Largest=%d",l);
    printf("Second=%d",s);
    return 0;
}