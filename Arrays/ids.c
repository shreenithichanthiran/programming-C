#include<stdio.h>
int main(){
    int size;
    int i,j;
    scanf("%d",&size);
    int a[size];
    for( i=0; i<size; i++){
        scanf("%d", & a[i]);
    }
    for( i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(a[i]==a[j]){
                 break;
            }   
        }
        if(i==j){
        printf("%d",a[i]);
    }
    }
    return 0;
}