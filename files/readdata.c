//fgetc reads a single character from a file
//fgets string from file
//fscaf reads a single word from a file
//fread reads a block of data from a file binary data
//EOF end of file '\0' null character string terminator
//-1 end of file '\0'

#include<stdio.h>
#include<stdlib.h>

void main(){

    
    FILE *fp;
    char c;
    char data[100];
    int count=0;
    //open....
    fp = fopen("D:\\Desktop\\10-04-2022\\dictonry","r");
    if(fp==NULL){
        printf("File not available");
        exit(0);
    }
    else{

            // char c = fgetc(fp);
            // printf("%c",c);
            // fclose(fp);

            
            //  while(fgets(data,100,fp)!=NULL){
            //     printf("%s",data);
            //     count++;
            //  }

        //scanf("%s",data)
            while(fscanf(fp,"%s",data)!=EOF){
                printf("%s",data);
                count++;
            }
    }

    printf("\n Total characters in file %d",count);

}