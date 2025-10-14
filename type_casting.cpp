#include <iostream>
using namespace std ;
int main(){

    char letter = 'a' ;
    int value = letter ; // this is type conversion done itself by the compiler nad it is implicit
    
    cout << value << endl; // this gives the escape value for the character

    /* now the next type of type casting is explicit which is done by the 
       programer with forcing the compiler  */
    
    double price = 100.999 ;
    int newprice = (int)price ;
    cout << newprice ;
    
    return 0 ;
}