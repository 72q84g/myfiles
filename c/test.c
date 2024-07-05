#include<stdio.h>
int main(void){
    int a[3];
    int j=1;
    a[j]=4;
    //a[j]==*(&a[0]+j)==*(a+j)==*(j+a)==j[a]
    printf("%d\n",j[a]);
    return 0;
}