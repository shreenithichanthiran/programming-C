#include<stdio.h>
int main(){
    char str[100];
    char a[100];
    //fgets(a,sizeof(a),stdin);
    fgets(str,sizeof(str),stdin);
    scanf("%c",&a);
    int count=-1;
    for(int i=0; a[i]!='\0';i++){
        for(int j=0;str[j]!='\0';j++){
            if(a[i]==str[j]){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}