#include<stdio.h>

///50 emaployee age  -->
/// age -> data type int numric same data type --> 10 friend goa  --> group -->
/// 10 movie --> 10000 dvd --> group -->

/// array is an group of similar kind of data type...
/// array follows index to store data...
/// index always starts with 0 -->

/// 1 -> 1st position
/// 1 -> 0th index  0 to n

void main(){


    ///object [int][char] = {"karan":20}
    ///int a[10]={15,25,45,78,96,36,54};
    int a[10],sum=0;
    /*
    a[0]=100;
    a[1]=250;
    a[2]=650;
    a[3]=852;
    a[4]=963;
    a[5]=82;
    a[6]=86;
    */

    for(int i=0;i<7;i++){
        printf("\n enter element ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<7;i++){
        ///0 = 0 + 100 //100
        ///100 = 100 +10  110
        sum = sum + a[i];
        printf("\n  index = %d",a[i]);
    }

    printf("\n sum = %d",sum);
    /*
    printf("\n 0th index = %d",a[0]);
    printf("\n  index = %d",a[1]);
    printf("\n  index = %d",a[2]);
    printf("\n  index = %d",a[3]);
    printf("\n  index = %d",a[4]);
    printf("\n  index = %d",a[5]);
    printf("\n  index = %d",a[6]);
    */

}
