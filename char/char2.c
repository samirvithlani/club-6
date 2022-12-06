#include<stdio.h>

void main(){


    char flag;


    while(flag!='n' || flag!='N'){
            printf("\n enter flag prees Y to continue and N to Exit");
            scanf("%c",&flag);
            if(flag=='N' || flag =='n'){

                break;
            }

            printf("\n helllo");
            break;
    }

}
