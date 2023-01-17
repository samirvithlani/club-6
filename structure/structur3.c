#include<stdio.h>


struct student{

    int id;
    char name[30];
    float marks[3];
};

void main(){

    struct student stu[3];
    for(int i=0;i<3;i++)
    {
        printf("\n enter id of student");
        scanf("%d",&stu[i].id);
        _flushall();
        printf("\n enter name of student");
        gets(stu[i].name);
        _flushall();
        printf("\n enter students marks:");

        for(int j=0;j<3;j++){
            printf("\n enter %d subject marks",i+1);
            scanf("%f",&stu[i].marks[j]);
        }
    }


    for(int i=0;i<3;i++){
        printf("\n name of student = %s",stu[i].name);
        printf("\n id of student = %d",stu[i].id);
        for(int j=0;j<3;j++){

            printf("\n marks of subject %d = %f",i+1,stu[i].marks[j]);

        }
    }




}