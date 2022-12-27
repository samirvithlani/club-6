#include<stdio.h>

///void null
void sum(){
//without return type without arguments / params
    ///local variable....
    int a,b;
    printf("\n enter value of a ");
    scanf("%d",&a);
    printf("\n enter value of b ");
    scanf("%d",&b);
    printf("\n sum  = %d",a+b);


}

void sub(int a,int b){

    int c = a - b;
    printf("\n sub = %d",c);
}

void get1(char y,float x){

    printf("\n y =%c",y);
    printf("\n x = %f",x);
}

///call by value..
void main(){

    int no1,no2;
    ///printf("\n a = %d",a);
    ///sum();
    printf("\n enter value of a");
    scanf("%d",&no1);
    printf("\n enter value of b");
    scanf("%d",&no2);
    sub(no1,no2);

    get1('H',12.36);

}
