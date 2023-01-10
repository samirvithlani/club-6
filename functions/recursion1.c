#include<stdio.h>

///rec function calling it self
///10
void print(int no){

    ///1<=10 TRUE
    ///2<=10 TRUE
    ///9<=10 TRUE
    ///10<=10 TRUE
    ///11<=1=FALSE
    ///10 >1
    if(no>1){

        ///print(1+1)
        ///print(10+1)
        ///print(10-1)
        print(no-1);

    }
    ///clear

    printf("\n no = %d",no);


}

void main(){

/*
    for(int i=1;i<=10;i++){

        printf("\n i =%d",i);
    }

*/
    ///
    print(10);

}
