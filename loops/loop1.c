/// to perform repetative task
/// 2 type of loops
/// entry control loop    exit control loop
/// for loop and while loop       do while loop
/// for -->  when you know entry point as well as exit point / condition
/// 1 to 100
/// while --> when the exit condition is not decided..
/// no != 0
/// do while loop exit condition

#include<stdio.h>

void  main(){


    int i,sum=0;
    ///i =1 intilization part
    /// i<=10 condition mart
    /// i++ increment decrement part...
    ////
    for(i=1;i<=10;i++){

        printf("\n i =%d",i);
        /// 1 = 0 + 1
        /// 3 = 1 + 2
        ///3 =  3 + 3 = 6
        /// 6 = 6 + 4 = 10
        /// 10 = 10 +5 15
        ///15 = 15 + 6 21
        ///21 = 21 + 7 28
        ///228 = 28 +8 = 36
        ///36 = 36 +9 = 45
        ///45 = 45 + 10 = 55
        sum = sum + i;

    }
    printf("\n sum =%d",sum);


}

