#include<stdio.h>

void main(){


    FILE *fp;
    //open....
    //function 
    //if file not available then it will create a file
    //if file available then it will open the file and overwrite the file

    //ABsolute path//fp = fopen("C:\\Users\\Samir\\Desktop\\demo3.txt","a");

    // ./ current directory
    // ../ parent directory
    // ../../ parent of parent directory
    fp = fopen("./demo.txt","a");
    if(fp ==NULL){
        printf("File not available");
    }
    else{

        printf("File available");
        fprintf(fp,"\n This is third line....");
        fclose(fp);
        printf("File closed Data written");
    }
    


}