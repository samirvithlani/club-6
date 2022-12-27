#include<stdio.h>

///void
///return data type

///with return type without argument/ param..
int sum(){

    int a = 100,b=200,c=0;
    ///c = a + b;

    return a + b;
}

float avg(float a,float b,float c){

    float ans = (a + b +c) /3;

    return ans;

}

long add(long a,int b){



    return a + b;
}


void main(){


    int ans = sum();
    printf("\n ans = %d",ans);

    float res = avg(15,20,30);
    printf("\n avg = %f",res);

    long l = add(56325,1);
    printf("\n add data = %ld",l);


}
