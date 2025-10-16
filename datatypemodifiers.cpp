#include <iostream>
using namespace std ;

int main (){
    /* first data type is long .. as we know that int can store upto only 
        4 bits and if a number is larger than that so it gives a negetive 
        number .. so we can use long data type to give it 8 bits of memory*/

    
    cout << sizeof( long int)<< "\n";

    /*similarly we have short data type .. short reduces the size of int to 
        2 bits .. it is used to store small number */

    cout << sizeof( short int) << "\n";
    
    /*similary we have long long in data type to store large values  */

    cout << sizeof( long long int) << "\n";

    /*now the next wo are signed and unsigned int .. generally int is signed 
    by default means it can store both positive and negetive value ..
    unsigned int means it cannot store negetive value hence it will 
    decrease the space and increase space for positive numbers */

    unsigned int i = -10 ;

    cout << i<< "\n" ; /*as we can see that there is an error .. because 
                        the compiler stores the number in form of 0 and 1 and 
                        in its 4 bits memory the forst place is given to 1 
                        not 0 .. and rest all are same so it will form something
                        like 101010101... which is positive and hence this is the reslt */

}