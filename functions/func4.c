#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int strlenudf(char name[30]){

    int count=0;
    for(int i=0;name[i]!='\0';i++){

        count++;
    }

    return count;

}


///boolean data type  true and false  1 0 false

bool test(){


    return false;
}


void main(){

    char name[30]="samir";
    int len = strlen(name);
    printf("\n len of %s = %d",name,len);

    int len1 = strlenudf(name);
    printf("\n len of %s = %d",name,len1);



   /* bool x = test();
    if(x==true){

        printf("\n TRUE");
    }
    else{
        printf("\n FALSE");
    }
    */

    if(test()){
        printf("\n TRUE");
    }
    else{
        printf("\n FALSE");
    }




}
