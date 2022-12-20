#include<stdio.h>
#include<string.h>

void main(){


    char name[30],greet[30]="hello";
    printf("\n enter name");
    gets(name);

    strcat(greet,name);

    printf("\n name =%s",greet);



}
