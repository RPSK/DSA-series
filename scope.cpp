#include <iostream>
using namespace std ;

int m= 7 ; //  this is a global scope variable and we can access it anywhere  

int function(){
    int x =10 ; // this is a local scope variable and we cannot acces it  outside this function 
   return 0 ;
}

int main (){
    function();
    cout << m ;

    for (int i =0 ; i < 1; i++){
        int n =2 ; // local scope and cannot access it outside this loop 
    }
}

