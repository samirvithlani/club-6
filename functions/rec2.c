#include<stdio.h>

///10
///9
///8
int recsum(int n){

    ///10!=0 TRUE
    ///9!=0 T
    ///8!=0 T
    if(n!=0){

                ///10 + 9
                ///19 +8
                ///27 +7
                ///34 +6
                ///40 +5
                ///45 + 4
                ///49 +3
                ///52 + 2
                ///54 +1
                ///55 + 0
                ///55


        return n + recsum(n-1);
    }


}

void main(){


    int sum=0;
    sum = recsum(10);
    printf("\n sum = %d",sum);


}
