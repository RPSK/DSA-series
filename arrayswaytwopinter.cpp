#include <iostream>
using namespace std ;

int reverse(int array[] , int size ){

    int start = 0 ;
    int end = size - 1 ;

    for (int i = 0 ; i <= size ; i ++ ){
        if(start >= end){
            break ;
        }
        swap(array[start] , array[end] );
        start++ ;
        end-- ;
    }

    for(int i = 0 ; i <size ; i ++){
        cout << " " <<array[i];
    }
    return 0 ;
}

int main(){

    int array[] = { 1, 2 , 3 , 4 , 5 , 6 , 7} ;
    int size = sizeof(array)/ sizeof(array[0]);

    reverse(array , size ) ;
    return 0 ; 
}