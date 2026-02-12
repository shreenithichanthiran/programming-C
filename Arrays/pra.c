#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    int t=0;
    for(int i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    int l=0;
    int lng=0;
    int s=0;
    int small=0;
    for(int i=0; i<size; i++){
        if(l<a[i]){
            l=a[i];
            lng=l;
        }
        if(l>a[i]){
            l=a[i];
            s=l;
            small=l;
        }
    }
    int m=0;
    for(int i=0; i<size; i++){
        if(s<a[i] && a[i]!=lng){
            s=a[i];
            m=s;
        }
    }
    for(int i=0; i<size; i++){
        t=m-small;
    }
    printf("%d",t);
    return 0;
}