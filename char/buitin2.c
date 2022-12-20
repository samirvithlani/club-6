#include<stdio.h>
#include<string.h>

void main(){

    char name[30],temp;
    int len;
    printf("\n enter name ");
    gets(name);

    strrev(name);
    /*
    len = strlen(name);

    ///royal
    ///layor
    int j = len-1;
    for(int i=0;i<len/2;i++,j--){

        temp = name[i];
        name[i] = name[j];
        name[j]= temp;

    }
    */
    printf("\n reversed name = %s",name);




}
