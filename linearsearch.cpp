#include <iostream>
using namespace std ;

int search(int array[] , int target , int size ){

    for(int i = 0 ; i < size ; i++){
        
        if (array[i]==target){
            cout << "NUMBER FOUND IN :" << i ;
            return 0 ; 
        }
    }
    cout << "NUMBER NOT FOUND..." ; 
}

int main(){

    int array[] = { 1, 2 , 3 , 4 , 5 , 6};
    int target = 213 ; 
    int size = 6 ;
    search(array , target , size ) ; 

    return 0 ; 
}