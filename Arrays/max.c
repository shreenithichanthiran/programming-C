#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum;
    int def=0;
    int ldef=def;
    int m=0;
    for(int i=0; i<r; i++){
        int add=0;
        for(int j=0; j<c; j++){
            add=add+a[i][j];
        }                                                                             
        for( int j=0; j<c; j++){
            if(def < add){
                def=add;
            }
        for(int j=0; j<c;j++){
            if(ldef>add){
                m=add;
            }
        }
        }
        if(def>ldef){
            sum=def-ldef;
        }
    }
    printf("%d",sum);
    return 0;
}