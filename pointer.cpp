#include <iostream>
using namespace std ;

int passbyrefrence(int &b){
    b = 20 ; 
    return b ; 
}
int main(){

    int a = 10 ;
    cout << &a  << "\n";  // prints address of a 

    int* ptr = &a ; // creates a variable pointer that stores adress of a 
    cout << ptr << "\n" ;

    int** ptr2 = &ptr ;  //stores address of that pointer 
    cout << ptr2 << "\n" ;

    
    cout << *(&a) << "\n" ; // dereference operator tells that value stored at that address
    return 0 ;
    
    cout << passbyrefrence(a)<< "\n" ;  // pass by refrence 

    ptr = ptr + 3 ; /*this means that we have increased the space of 
                    pointer by 12 bytes and created space of 2 integers*/

    cout << ptr << "\n" ; 
    
}