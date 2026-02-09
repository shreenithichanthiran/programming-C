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
    int equ=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            for(int k=0; k<r; k++){
                for(int l=0; l<c; l++){
                    if(a[i][j]== a[k][l]){
                        printf("%d",a[i][j]);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}