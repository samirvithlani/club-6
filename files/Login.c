#include<stdio.h>
#include<string.h>


void signUp(){

    FILE *fp;
    char email[20],password[20],name[30];

    
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your email: ");
    scanf("%s",email);
    printf("Enter your password: ");
    scanf("%s",password);
    

    fp = fopen("user.txt","a");
    if(fp==NULL){
        printf("File not found");
    }
    else{
        fprintf(fp,"\r");
        fprintf(fp,"%s %s %s",name,email,password);
        printf("Account created successfully");
        fclose(fp);
    }


}

void login(){

    FILE *fp;
    char name[30],email[20],password[20],email1[20],password1[20],name1[30];
    int flag=0;
    printf("Enter your email to login: ");
    scanf("%s",email1);
    printf("Enter your password to login: ");
    scanf("%s",password1);


    fp = fopen("user.txt","r");
    while((fscanf(fp,"%s %s %s",name,email,password)!=EOF)){

        if(strcmp(email,email1) == 0 && strcmp(password,password1)==0){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
        printf("Login successful");
        printf("Welcome %s",name);
    }
    else{
        printf("Login failed");
    }


    
}
void main(){


    //signUp();
   login();
    
}