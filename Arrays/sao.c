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
        int k=0;
        for(int j=0; j<c; j++){
            if(k<a[i][j]){
                k=a[i][j];
            }
            //else if(k>=a[i][j]){
            //    count++;
            //}
            else{
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}