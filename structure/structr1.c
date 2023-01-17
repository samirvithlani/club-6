#include<stdio.h>

struct employee{

    //local variable...
    int id;
    char name[30];
    float salary;

}emp;
//glob


void main(){

    //reference of structure
    //struct employee emp; ///local refer
    printf("\n enter id of an employee");
    scanf("%d",&emp.id);
    _flushall();
    printf("\n enter name of an employee");
    gets(emp.name);
    _flushall();
    printf("\n enter salary of an employee");
    scanf("%f",&emp.salary);


    printf("\n id of %s = %d",emp.name,emp.id);
    printf("\n salary of %s  = %f",emp.name,emp.salary);
    

}