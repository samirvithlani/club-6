#include<stdio.h>

void main(){


    char name[30],temp;
    int i,j,len=0;
    ///r o y a l
    ///l a y o r
    ///henish
    ///hsineh 6 / 2 3

    ///samir 5
    printf("\n enter name");
    gets(name);
    for(int i=0;name[i]!='\0';i++){

        len++;
    }

    ///j=4
    ///samir
    j = len-1;
    for(i=0;i<len/2;i++,j--){

        ///temp = name[0] =s
        ///temp =name[1] =a
        temp =name[i];
        ///name[0] = name[j[4] = r
        ///name[0] = r
        ///name[1] = name[j[3] =i
        name[i] = name[j];
        ///name[j[4] = s    ri as
        name[j] = temp;
        ///name[3[a

    }


    printf("\n name = %s",name);




}
