#include<stdio.h>
#include<stdlib.h>

void main(){

    FILE *fp;
    fp =fopen("cred.txt","w");
    if(fp==NULL){
        printf("File not available");
        exit(0);
    }
    else{

            fprintf(fp,"%s %s %s %d %s","Raj","Patel","patelraj@gmail.com",1,"raj123");
            fclose(fp);



    }


}