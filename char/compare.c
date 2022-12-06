#include<stdio.h>

void main(){

    char name1[30],name2[30];
    int flag=0,name1len=0,name2len=0;
    printf("\n enter name1");
    gets(name1);
    printf("\n enter name2");
    gets(name2);

    ///name1 = raj name2 =ram  ==> [0] r t a m
    ///name1ro    name2roro
    ///raja raj'\0'
    ///t
    ///a
    ///j
    ///a --> g
    ///raj raja
    ///r
    ///a
    ///j

    for(int i=0;name1[i]!='\0';i++){

        name1len++;
    }
    for(int i=0;name2[i]!='\0';i++){

        name2len++;
    }

    if(name1len!= name2len){

        printf("\n both are not same");
        exit(0);
    }

    for(int i=0;name1[i]!='\0';i++){
        ///samir ram
        ///s r

        if(name1[i]!=name2[i]){

            flag=1;
            break;
        }
    }

    if(flag==1){
        printf("\n not same");
    }
    else{

        printf("\n both are same");
    }


}
