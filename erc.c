#include<stdio.h>
int main(){
    int att,marks;
    scanf("%d%d",&att,&marks);
    if(att>75 && marks >=75){
        printf("Distinction");
    }
    else if(marks>=50 && marks<=74){
        printf("pass");
    }
    else if(marks<50){
        printf("Fail");
    }
    else if(att<75){
        printf("Fail");
    }

    return 0;
}