//*************************** TOWER OF HANOI *************************************8

#include<stdio.h>

void TOH (int n, char A, char B, char C)
//n :: no of disk to be moved
//A :: character from rod ;;     source ;;          Rod where disk is present
//B :: character to rod ;;       destination ;;     Rod where disk is to be moved
//C :: character auxilary rod ;; Auxilary rod ;;    temprory rod or middle rod
{
    if (n>0)    //or n==0
    {
        TOH((n-1), A, C, B);    //swap destination and aux argument , leave source
        printf("move a disk form %c to %c \n", A, C);
        TOH(n-1, B, A, C);  //swap source and destination , leave auxilary
    }
    
}
int main()
{
    TOH(4, 'a', 'b', 'c');
    return 0;
}

/*
Total number of moves :: 2^n -1
Total number of calls :: 2^(n+1) -1
*/