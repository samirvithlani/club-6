#include<stdio.h>

void main(){


    //5 *1 = 5
    //5 *2 = 10
    int no,mul=1;

    printf("\n enter no to print table ");
    scanf("%d",&no);

    for(int i=1;i<=10;i++){

        ///5 *1 = 5
        /// =6
        ///6 * 2 = 12
        mul = no * i;
        printf("\n %d * %d = %d",no,i,mul);
    }

}
