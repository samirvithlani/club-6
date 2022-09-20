///logical operators
///&& , || , !

///if(no>18 && no%2 ==0){} else{}

/*
        1       2       res
        T       T       T
        F       -       F
        T       F       F

*/
///if(no>18 || no%2 ==0){} else{}
/*

        T      -     T
        F      F     F
        F      T     T


*/

/// 3 subject 100  %
///% 80 grade A
/// 60 to 80 B
/// 50 to 60 C
/// 50 FAIL
void main(){


    int no;
    printf("\n enter no");
    scanf("%d",&no);

    if(no%2==0 || no%3==0){

        printf("\n TRUE");
    }
    else{
        printf("\n FALSE");
    }


}



