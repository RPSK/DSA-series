#include <iostream>
#include <climits>
using namespace std ;

int selectionsort(int array[] , int size){

    for(int i=0 ; i < size ; i++ ){

        int min = INT_MAX;

        for(int j=i ; j < size ; j++){

            if(array[j]<min){
                
                min = array[j] ; 
                swap(array[i],array[j]); 
            }
        }

    }

    for(int i = 0 ; i < size ; i++){
            cout<< " " << array[i] ; 
        }

    return 0 ; 
}

int bubblesort(int array[] , int size ){

    for(int i = 0 ; i < size ; i++){

        for(int j = i ; j < size - 1 ; j++){

            if(array[j]>array[j+1]){
                swap(array[j] , array[j+1]) ; 
            }
        }
    }
    cout<< "\n" ; 

    for(int i = 0 ; i < size ; i++){
            cout<< " " << array[i] ; 
        }
}

int insertionsort(int array[] , int size ){
    
    for(int i=0 ; i < size ; i ++){

        for(int j = i+1 ; j <= 0 ; j--){

            if(array[i] < array[j]){
                swap(array[i] , array[j]) ; 
            }
        }
    }
    cout<< "\n" ; 

    for(int i = 0 ; i < size ; i++){
            cout<< " " << array[i] ; 
        }
}

int main(){
    int array[] = {13,46,24,52,20,9} ; 
    int size = sizeof(array)/ sizeof(array[0]) ; 

    selectionsort(array ,size ) ; 
    bubblesort(array, size ) ; 
    insertionsort(array, size );
    return 0 ; 
}