#include<stdio.h>

void main(){

    FILE *fp;
    fp = fopen("demo.txt","r");
    if(fp == NULL){
        printf("File not found");
    }
    else{
        fseek(fp,5,SEEK_SET);
        printf("%c",fgetc(fp));
        fclose(fp);
    }

}