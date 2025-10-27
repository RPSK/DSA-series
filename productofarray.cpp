#include <iostream>
using namespace std ; 

int twopointer(int array[] , int size){
    int i = 0 ;
    int product = 1; 
    int newarray[size] ;
    int start = 0 ; 
    int end = size - 1; 

    while( i < size){
        
        
        if(start==i){
            start++ ;
            continue ;  
        }
        if(end==i){
            end--;
            continue ; 
        }
        if(start>end){
            cout << newarray[i] << " " ; 
            i++ ; 
            start = 0 ;
            end = size-1 ;
            product = 1 ;
            continue ;
        }

        product = product*array[start]*array[end] ; 

        if(start==end){
            product = product / array[start] ; 
            
        }
        newarray[i]  = product ;
        start++ ;
        end-- ;
    }

   
return 0 ;
}

int main(){
    
    int array[] = {1,2,3,4} ; 
    int size = sizeof(array)/sizeof(array[0]); 
    twopointer( array ,size) ;
    return 0 ;
}