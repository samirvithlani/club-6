#include<stdio.h>


struct student{

    int id;
    char name[30];
    float marks[3];
};

void getStudentData(){

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
            printf("\n enter %d subject marks",j+1);
            scanf("%f",&stu[i].marks[j]);
        }
    }

}
void printStudentData(){

struct student stu[3];

for(int i=0;i<3;i++){
        printf("\n name of student = %s",stu[i].name);
        printf("\n id of student = %d",stu[i].id);
        for(int j=0;j<3;j++){

            printf("\n marks of subject %d = %f",j+1,stu[i].marks[j]);

        }
    }
}

void main(){

    int choice;
    do{
    printf("\n enter your choice:");
    printf("\n press 1 for add stduent data:");
    printf("\n press 2 for add display data:");

    
    scanf("%d",&choice);

        switch(choice){
            case 1:
                getStudentData();
            break;
            case 2:
                printStudentData();
            break;
            default:
            printf("\n not valid choice");
                
            break;
        }
        
        

    }while(choice!=3);


}