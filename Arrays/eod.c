#include<stdio.h>
int main(){
    int size;
    int ec=0;
    int oc=0;
    scanf("%d",&size);
    int a[size];
    for(int i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size; i++){
            if(a[i]%2==0){
                ec++;
            }
            else{
                oc++;
            }
        }
    printf("Even:%d Odd:%d",ec,oc);
    return 0;

}