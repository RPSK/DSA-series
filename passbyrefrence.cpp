#include <iostream>
using namespace std ;

int function (int array[]){ 


    /* function does not copy the values of array .. it just copies 
    the address and change the values there itself */

    for (int i = 0 ; i < 5 ; i++ ){
        array[i] = 2*array[i];

   }
   return 0 ;
}

int main(){

   int  array[] = {1 , 2 , 3 , 4 , 5} ;

   function (array);  // this is pass by refrence 

   for (int i = 0 ; i < 5 ; i++ ){
    cout << " " << array[i];
   }
   return 0 ; 
}