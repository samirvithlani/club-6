#include<stdio.h>

//12
int sumofdigit(int no){

   
    if(no==0){
        return 0;
    }


    
///  (123 % 10) + (123 /10)
//3                  
//3 +2
//5 +1 
    return (no %10 + sumofdigit(no /10));
}


void main(){


    int ans = sumofdigit(123);
    printf("\n ans= %d",ans);


}