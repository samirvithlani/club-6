#include<stdio.h>


struct student{

    int id;
    char name[30];
    float marks[3];
};

void main(){

    struct student stu;
    printf("\n enter id of student");
    scanf("%d",&stu.id);
    _flushall();
    printf("\n enter name of student");
    gets(stu.name);
    _flushall();
    printf("\n enter students marks:");

    for(int i=0;i<3;i++){
        scanf("%f",&stu.marks[i]);
    }


    printf("\n name of student = %s",stu.name);
    printf("\n id of student = %d",stu.id);
    for(int i=0;i<3;i++){

        printf("\n marks of subject %d = %f",i+1,stu.marks[i]);

    }




}