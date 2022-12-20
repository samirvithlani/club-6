#include<stdio.h>
#include<string.h>

void main(){

        char name1[30],name2[30];

        printf("\n enter name1 ");
        gets(name1);

        /*
        for(int i=0;name1[i]!='\0';i++){

            ///      r=r
            name2[i] = name1[i];

        }
        */
        strcpy(name2,name1);

        printf("\n name2 = %s",name2);



}
