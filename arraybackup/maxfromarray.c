#include<stdio.h>

void main(){

    int a[10];



    for(int i=0;i<5;i++){

        printf("\n enter element");
        scanf("%d",&a[i]);
    }
    /// 10 12 2 96 45

    ///max
    int max = a[0];
    /// max = 10
    for(int i=0;i<5;i++){
        /// a[0] > max = a[10] > 10  false  max= 10
        ///a[1] > max =  12 > 10 TRUE  max =12
        ///a[2] > max =   2 > 12 FALSE  max = 12
        ///a[3] >max  = 96 > 12 TRUE  max =96
        ///a[4] >max = 45 > 96 FALSE max =96
        if(a[i]>max){

            ///max= 12
            ///max = 96 max = 96
            max = a[i];
        }

    }

    printf("\n max = %d",max);



}
