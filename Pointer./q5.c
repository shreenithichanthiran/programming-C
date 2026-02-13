#include<stdio.h>
void rev(int a[], int size){
    int *p = a;
    for(int i=size-1; 0<=i ;i--){
        printf("%d",(*(p+i)));
    }
}

int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    rev(a,size);
    return 0;

}