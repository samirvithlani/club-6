#include<stdio.h>
#include<string.h>

///ASSIC 65,66 97,98...
/// space 32
void main(){

    char name[30];
    printf("\n enter name");
    gets(name);

    /*
    for(int i=0;name[i]!='\0';i++){

    ///AMIT
        if(name[i]>=97 && name[i]<121){

                ///name[i] = 65 + 32 = 97 A a
                name[i] = name[i]-32;
        }
    }
    */

    //strupr(name);
    strlwr(name);


    printf("\n name = %s",name);




}

