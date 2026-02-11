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
    int count=0;
    for(int i=0; i<r; i++){    
        for(int j=0; j<c; j++){
            for(int k=0; k<r; k++){
                for(int g=0; g<c; g++){
                    if(i==k && j==g){
                        continue;
                    }
                    if(a[i][j] == a[k][g]){
                        count=a[i][j];
                    }
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}