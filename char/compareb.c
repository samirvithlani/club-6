#include<stdio.h>
#include<string.h>

void main(){

        char name1[30],name2[30];
        int len1=0,len2=0,flag;

        printf("\n enter name1 ");
        gets(name1);

        printf("\n enter name2 ");
        gets(name2);

        ///if both same it will return 0
        flag = strcmp(name1,name2);
        if(flag==0){
            printf("\n both same");
        }
        else{
            printf("\n both are diff...");
        }

        /*
        for(int i=0;name1[i]!='\0';i++){

            len1++;
        }
        for(int i=0;name2[i]!='\0';i++){

            len2++;
        }
        if(len1 == len2){

            for(int i=0;name1[i]!='\0';i++){

                if(name1[i]==name2[i]){
                    flag=0;
                }
                else{
                    flag=1;
                    break;
                }
            }

        }
        else{
                flag =1;
        }


        if(flag==1){
            printf("\n both are not same!!");
        }
        else{
            printf("\n both are same!!");

        }
        */


}
