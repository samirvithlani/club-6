#include<stdio.h>

void main(){

    int age;
    printf("\n enter age");
    scanf("%d",&age);

    if(age>=18){
        printf("\n elig for vote");
        if(age>=21){
            printf("\n elg for mrg....");

            if(age >=60){
                printf("\n elg for sr citi...conn");
            }
            else{
                printf("\n not elg for sr citi con...");
            }

        }
        else{
            printf("\n not eligble for mrg");
        }
    }

    else{
          printf("\n not elg voting..");
          if(age >=5){

            printf("\n elg for schooling...");
          }
          else{
            printf("\n not elg for schooling...");
          }


    }
}
