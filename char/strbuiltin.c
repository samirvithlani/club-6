#include<stdio.h>
#include<string.h>

void main(){

    char name[30];
    int count=0;
    printf("\n enter name");
    gets(name);
    count = strlen(name);


    ///samir'\0'
    /*
    for(int i=0;name[i]!='\0';i++){
        count++;

    }

    */
    printf("\n count = %d",count);


}
