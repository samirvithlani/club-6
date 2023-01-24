#include<stdio.h>
#include<stdlib.h>

void main(){

    FILE *fp;
    char name[20],email[20],password[20],surname[20];
    char nameu[20],emailu[20],passwordu[20],surnameu[20];
    int id,idu;

    fp =fopen("cred.txt","r");
    if(fp ==NULL){
        printf("file not avail;abe");
        exit(0);
    }
    else{
    
        //all data stored in local variable....
        fscanf(fp,"%s %s %s %d %s",name,surname,email,&id,password);
        fclose(fp);

        printf("\n name from file is %s",name);
        printf("\n surname from file is %s",surname);
        printf("\n email from file is %s",email);
        printf("\n id from file is %d",id); 
        printf("\n password from file is %s",password);
        
    }
    
    


}