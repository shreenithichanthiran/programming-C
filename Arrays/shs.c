#include<stdio.h>
int main(){
    int size;
    int s=0;
    int l=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<size; j++){
        if(l<arr[j]){
            l=arr[j];
            s=l-arr[j];
            
        }
    }
    printf("Largest=%d",l);
    printf("Second=%d",s);
    return 0;
}