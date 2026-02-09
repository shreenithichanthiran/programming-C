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
    
    int uni=0;
    int deff=0;
    for(int i=0; i<r; i++){
        int count=0;
        for(int j=0; j<c; j++){
            if(a[i][j] != deff){
                deff=a[i][j];
            }
            else {
                uni=deff;
                //count++;
            }
        }
        //printf("%d",count);
    }
    printf("%d\n",deff);
    printf("%d",uni);
    return 0;
}