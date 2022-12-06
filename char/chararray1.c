#include<stdio.h>

void main(){


    ///char name[30]="royal'\0'";
    ///'\0' null char jhbug bb b yi h ib iuh hy
    char name[30];
    int len,space=0;
    printf("\n enter name ");
    ///scanf("%s",name);
    gets(name);
    printf("\n name = %s",name);
    for(int i=0;name[i]!='\0';i++){

        printf("\n char = %c",name[i]);
        len++;
        if(name[i]== 32){

            space++;
        }
    }
    printf("\n no of char = %d",len);
    printf("\n no of sapce = %d",space+1);
}


