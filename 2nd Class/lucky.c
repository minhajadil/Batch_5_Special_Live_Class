#include<stdio.h>


int main(){


    int N ; scanf("%d",&N) ;

    int first = N/10 ;
    int second = N%10 ;

    if(second==0){
        printf("YES\n") ;
    }
    else if(first%second==0 || second%first==0){
        printf("YES\n") ;
    }
    else{
        printf("NO\n") ;
    }




}