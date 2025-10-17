#include <iostream>
#include <vector > 
using namespace std ;

int main(){

    vector<int> vec ;  // verctor --> <type> --> name 

    vector <char> vec1 = {'a' , 'b' , 'c' , 'd', 'e'};
    
    vector <int> vec2(3,0) ; /* inside brackets first value represents size and
                              second tells us the value at every index */

    cout << vec2[0]<< vec2[1] << vec2[2] ;

    for( char i : vec1){
        cout<< "\n" << vec1 ;
    }

    return 0 ;

}