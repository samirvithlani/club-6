#include<stdio.h>

void main(){

    int bal;

    a:
    printf("\n enter op balance");
    scanf("%d",&bal);

    if(bal<10000){
        printf("\n mim req bal is < 10000");
        goto a;
    }
    else{
        printf("\n op bal = %d",bal);
    }


}
