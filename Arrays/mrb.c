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
    int sub=2;
    int res=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j]==sub){
                sub=sub*2;
                res=res+sub;
            }
        }
    }
    //printf("%d\n",sub);
    printf("%d",res);
    return 0;
}