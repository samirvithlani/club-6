#include<stdio.h>
///array is group of similar kind of data....
/// a[10]; --> 10 0 - 9
/// 7 days - 3  21
/// a[21]=  [0 1 2],[3 4 5],[6 7 8],
void main(){

    ///9
    int
    a[3][3],sum=0;

    printf("\n enter elements of an array");

    for(int i=0;i<3;i++){

        ///i = 0
        ///1
        for(int j=0;j<3;j++){
            /// j =0
            /// j =1
            /// j =2
            scanf("%d",&a[i][j]);
        }

    }

        for(int i=0;i<3;i++){

        ///i = 0
        ///1
        for(int j=0;j<3;j++){
            /// j =0
            /// j =1
            /// j =2
            printf("  %d",a[i][j]);
            sum = sum +a[i][j];
        }
        printf(" sum = %d",sum);
        sum=0;
        printf("\n");

    }





}

