#include<stdio.h>
int main(){
    int size,x,ma;
    int fc=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&ma);
        if(x==ma){
            fc++;
        }
    }
    scanf("%d",&x);
    printf("Frequency count=%d",fc);
    return 0;
}