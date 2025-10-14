#include <iostream>
using namespace std ;

int factorial (int number ){

    int factorial = 1 ;

    for(int i=1 ; i < number+1; i ++ ){
        factorial = i*factorial ;
    }
    return factorial ;
}
int main(){
   cout << factorial(5);
    return 0 ;
}