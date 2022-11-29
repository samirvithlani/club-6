#include<stdio.h>

void main(){

    int a[10],no,flag=0,index;
    for(int i=0;i<5;i++){

        printf("\n enter element");
        scanf("%d",&a[i]);
    }

    /// 12 45 96 354 45
    /// 45 --? present --> 45 found in array   78
    printf("\n enter element to search from array");
    scanf("%d",&no);




        for(int i=0;i<5;i++){

            ///  45  == 12 false
            ///45 == 45 true
            ///45 =96 false
            ///354 =false
            ///45 = true
            ///last index
            if(no == a[i]){

                ///printf("\n match");
                flag=1;
                index = i;
                ///first occurnce
                break;
                ///45
            }
            /*
            else{
                printf("\n not macth:");
            }
            */

        }

        if(flag==1){

            printf("\n element found at position..%d",index+1);
        }
        else{
            printf("\n element not found..");
        }


}
