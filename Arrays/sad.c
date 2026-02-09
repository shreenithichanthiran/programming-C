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
    int highest=0;
    int sec=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j]>highest){
                highest=a[i][j];
            }
            if(a[i][j]>sec && a[i][j] != highest){
                sec= a[i][j];
            }
        }
    }
    printf("Highest salary= %d\n",highest);
    printf("Second highest distinct salary= %d",sec);
    return 0;
}