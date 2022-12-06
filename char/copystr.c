#include<stdio.h>
void main(){

    char name[30],name1[30],temp;
    printf("\n enter name ");
    gets(name);

    ///royal
    for(int i=0;name[i]!='\0';i++){
        /// name1[0] = r
        name1[i] = name[i];
    }

    printf("\n name1 = %s",name1);


}
