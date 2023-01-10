#include<stdio.h>
#include<string.h>

int udfstrlen(char name[30]){

    int count=0;
    for(int i=0;name[i]!='\0';i++){

        count++;

    }

    return count;
}

char test(){

    char t[30]="samir";

    return t;
}

void main(){


    char name[30]="samir";
    int len;
    ///len = strlen(name);
    len = udfstrlen(name);
    printf("\n len = %d",len);

    char x[30]= test();

}
