#include <iostream>
using namespace std ;

int pairsum(int array[] , int size , int target ){

    int start = 0 ;
    int end = size - 1 ;

    for(int i = 0 ; i < size*(size-1) ; i++){

        int pairsum = array[start] + array[end] ; 
        
        if(pairsum > target){
            end-- ;
        }
        if(pairsum < target){
            start++ ;
        }
        if(pairsum==target){
            cout << start << end ;
            break ;
        }
    }
    return 0 ;
}


int main(){

    int array[] = {2,4,5,7,9,10,14} ; 
    int size = sizeof(array) / sizeof(array[0]); 
    int target = 6` ;
    pairsum(array,size, target) ;

    return 0 ; 
}