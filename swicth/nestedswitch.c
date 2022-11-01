#include<stdio.h>

void main(){

    int country,state;
    printf("\n Enter your choice");
    printf("\n Enter 1 for India :");
    printf("\n Enter 2 for Usa :");
    printf("\n Enter 3 for UK :");
    scanf("%d",&country);
    switch(country){

    case 1:
                printf("\n Welcome to India");
                printf("\n Enter 1 for Gujarat");
                printf("\n Enter 2 for Maharashtra");
                printf("\n Enter 3 for Tamilnadu");

                scanf("%d",&state);

                switch(state){
                    case 1:
                            printf("\n Welcome To Gujarat");
                    break;
                    case 2:
                            printf("\n Welcome To Maharashtra");
                    break;
                    case 3:
                            printf("\n Welcome To Tamilnadu");
                    break;

                }


    break;
    //country case 1 over..

    case 2:
                printf("\n Welcome to USA");
                printf("\n Enter 1 for california");
                printf("\n Enter 2 for Florida");
                printf("\n Enter 3 for WD");

                scanf("%d",&state);

                switch(state){
                    case 1:
                            printf("\n Welcome To california");
                    break;
                    case 2:
                            printf("\n Welcome To Florida");
                    break;
                    case 3:
                            printf("\n Welcome To WD");
                    break;

                }


    break;
    //country case 2 over..



    }




}
