#include <iostream>
#include <climits>
using namespace std ;

int subarray(int array[], int size){
    for(int m = 0 ; m < size ; m++){

        for(int i = 1 ; i <size ; i ++){

            for(int p = m ; p < i+1 ; p++ ){
                cout<< array[p]  ; 
            }
            cout<< " "; 
        }
        cout << "\n" ; 
    }
    return 0 ;
}

int kadanesalgo(int array[] , int size){

    int maxsum = INT_MIN ; 
    int currentsum = 0  ; 

    for (int i = 0 ; i <size ; i++ ){
        currentsum = currentsum + array[i] ;
        maxsum = max(currentsum , maxsum ) ;
         if ( currentsum < 0 ){
            currentsum = 0 ; 
         } 
       
    }

    cout << maxsum   ; 
    return 0 ;
}

int main(){

    int array[]= {-5,6,7,-4,9,3,-20};
    int size = sizeof(array)/sizeof(array[0]);
    //subarray(array,size);
    kadanesalgo(array,size);
    return 0 ;

}