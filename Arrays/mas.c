#include<stdio.h>
int main(){
    int r,c;
    int sum=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    int avg;
    for(int i=0; i<r; i++){
        int count=0;
        for(int j=0; j<c; j++){
            avg=sum/c;
            if(avg<a[i][j]){
                count++;
            }
        }
        printf("%d",count);
        printf("\n");        
    }
    return 0;
}